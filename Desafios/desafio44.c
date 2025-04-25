#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define WIDTH 10
#define HEIGHT 20
#define DELAY 300000 // microsegundos (0.3 seg)

int board[HEIGHT][WIDTH];

typedef struct
{
    int shape[4][4];
    int x, y;
} Tetromino;

Tetromino pieces[7] = {
    {{{0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 0, 0}},
     3,
     0}, // I

    {{{0, 0, 0, 0},
      {0, 1, 1, 0},
      {0, 1, 1, 0},
      {0, 0, 0, 0}},
     4,
     0}, // O

    {{{0, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 0, 1, 0},
      {0, 0, 0, 0}},
     3,
     0}, // S

    {{{0, 0, 1, 0},
      {0, 1, 1, 0},
      {0, 1, 0, 0},
      {0, 0, 0, 0}},
     3,
     0}, // Z

    {{{0, 0, 0, 0},
      {0, 1, 1, 1},
      {0, 0, 1, 0},
      {0, 0, 0, 0}},
     3,
     0}, // T

    {{{0, 1, 0, 0},
      {0, 1, 0, 0},
      {0, 1, 1, 0},
      {0, 0, 0, 0}},
     3,
     0}, // L

    {{{0, 0, 1, 0},
      {0, 0, 1, 0},
      {0, 1, 1, 0},
      {0, 0, 0, 0}},
     3,
     0} // J
};

Tetromino current;

void draw_board()
{
    clear();
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (board[y][x])
            {
                mvprintw(y, x * 2, "[]");
            }
            else
            {
                mvprintw(y, x * 2, "  ");
            }
        }
    }

    // dibujar pieza actual
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (current.shape[y][x])
            {
                mvprintw(current.y + y, (current.x + x) * 2, "[]");
            }
        }
    }

    refresh();
}

int check_collision(int nx, int ny, int shape[4][4])
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (shape[y][x])
            {
                int newX = nx + x;
                int newY = ny + y;
                if (newX < 0 || newX >= WIDTH || newY >= HEIGHT)
                    return 1;
                if (newY >= 0 && board[newY][newX])
                    return 1;
            }
        }
    }
    return 0;
}

void merge_piece()
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (current.shape[y][x])
            {
                board[current.y + y][current.x + x] = 1;
            }
        }
    }
}

void rotate_piece()
{
    int temp[4][4];
    for (int y = 0; y < 4; y++)
        for (int x = 0; x < 4; x++)
            temp[y][x] = current.shape[3 - x][y];

    if (!check_collision(current.x, current.y, temp))
    {
        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 4; x++)
                current.shape[y][x] = temp[y][x];
    }
}

void clear_lines()
{
    for (int y = 0; y < HEIGHT; y++)
    {
        int full = 1;
        for (int x = 0; x < WIDTH; x++)
        {
            if (!board[y][x])
            {
                full = 0;
                break;
            }
        }
        if (full)
        {
            for (int i = y; i > 0; i--)
                for (int j = 0; j < WIDTH; j++)
                    board[i][j] = board[i - 1][j];
            for (int j = 0; j < WIDTH; j++)
                board[0][j] = 0;
        }
    }
}

void new_piece()
{
    current = pieces[rand() % 7];
    current.x = WIDTH / 2 - 2;
    current.y = 0;

    if (check_collision(current.x, current.y, current.shape))
    {
        endwin();
        printf("Game Over!\n");
        exit(0);
    }
}

int main()
{
    srand(time(0));
    initscr();
    noecho();
    cbreak();
    timeout(0);
    keypad(stdscr, TRUE);
    curs_set(FALSE);

    new_piece();

    while (1)
    {
        int ch = getch();
        switch (ch)
        {
        case KEY_LEFT:
            if (!check_collision(current.x - 1, current.y, current.shape))
                current.x--;
            break;
        case KEY_RIGHT:
            if (!check_collision(current.x + 1, current.y, current.shape))
                current.x++;
            break;
        case KEY_DOWN:
            if (!check_collision(current.x, current.y + 1, current.shape))
                current.y++;
            break;
        case ' ':
            rotate_piece();
            break;
        }

        static int tick = 0;
        if (++tick > 5)
        {
            tick = 0;
            if (!check_collision(current.x, current.y + 1, current.shape))
            {
                current.y++;
            }
            else
            {
                merge_piece();
                clear_lines();
                new_piece();
            }
        }

        draw_board();
        usleep(DELAY);
    }

    endwin();
    return 0;
}
// tetriss