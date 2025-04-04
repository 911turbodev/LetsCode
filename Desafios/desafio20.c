#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
void setTextColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{
    setTextColor(13);
    printf("||====================================================||\n");
    printf("||                  WELCOME TO                        ||\n");
    printf("||====================================================||\n");
    printf("||     ((     ) (          )             (   )>       ||\n");
    printf("||      > \\/^/) )) (   ( /(.      ))     ))._/(__)    ||\n");
    printf("||     (  _../ ( \\))    )   \\ (  / \\.  ./ ||  ..__:   ||\n");
    printf("||     |  \\__.  ) |   (/  /: :)) |   \\/   |(  <.._    ||\n");
    printf("||    ))  _./   |  )  ))  __  <  | :(     :))   .//   ||\n");
    printf("||    (: <     ):  --:   ^  \\  )(   )\\/   /   /_/ )   ||\n");
    printf("||     \\..)   (_..  ..  :    :  : .(   \\..:..    ./   ||\n");
    printf("||                ^    ^      \\^ ^           ^\\/^     ||\n");
    printf("||====================================================||\n");

    int intentos, num, numeroSecreto, wins = 0;
    srand(time(NULL));
    int playAgain = 1;
    char opcion;
    printf("Bienvenido al juego: ");
    Sleep(900);
    printf("ADIVINA EL NUMERO\n");
    while (playAgain)
    {
        int numeroSecreto = (rand() % 100) + 1;
        intentos = 0;
        printf("Cargando juego...\n");
        Sleep(1000);
        printf("Generando numero secreto...\n");
        Sleep(1000);
        printf("Numero secreto generado.\n");
        Sleep(1300);
        system("cls");
        printf("Elije un numero entre [1-100] %d\n", numeroSecreto);
        printf("Tienes 7 intentos.\n");
        while (intentos < 7)
        {
            printf("Intento [%d]: Ingresa un numero: ", intentos + 1);
            scanf(" %d", &num);
            if (num == numeroSecreto)
            {
                printf("\nAcertaste! el numero secreto era [%d]\n\n", numeroSecreto);
                wins++;
                break;
            }
            else if (num < numeroSecreto)
            {
                printf("Muy bajo!\n");
            }
            else
            {
                printf("Muy alto!\n");
            }
            intentos++;
        }
        if (num != numeroSecreto)
        {
            printf("\nNo te quedan mas intentos :(\n\nEl numero era: [%d]\n\n", numeroSecreto);
        }
        printf("Deseas seguir jugando? [s/n]: ");
        scanf(" %c", &opcion);
        if (opcion != 's' && opcion != 'S')
        {
            playAgain = 0;
        }
    }
    printf("\n============================");
    printf("\n||  TABLA DE PUNTUACIONES ||\n");
    printf("============================\n");
    if (wins > 1 || wins == 0)
    {
        printf("||     Ganaste %d veces    ||\n", wins);
    }
    else if (wins == 1)
    {
        printf("||     Ganaste %d vez      ||\n", wins);
    }
    printf("============================");
    printf("\n||  Gracias por jugar!    ||\n");
    printf("============================");
    return 0;
}
