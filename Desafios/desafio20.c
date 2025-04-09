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
    printf(" \
_____________________$$$ \n \
____________________$___$ \n \
_____________________$$$ \n \
_____________________$_$ \n \
_____________________$_$ \n \
___________________$$$_$$$ \n \
_________________$$__$$$__$$$ \n \
_______________$$__$$$$$$$___$ \n \
______________$_______________$ \n \
_____________$_________________$ \n \
_____________$_________________$ \n \
_____________$_____$$$$$$$$$$$$$$$ \n \
_____________$____$_______________$ \n \
_____________$____$___$$$$$$$$$$$$$ \n \
_____________$___$___$___________$$$ \n \
_____________$___$___$_$$$___$$$__$$ \n \
_____________$___$___$_$$$___$$$__$$ \n \
_____________$___$___$___________$$$ \n \
_____________$____$___$$$$$$$$$$$$$ \n \
_____________$_____$$$$$$$$$$$$$$ \n \
_____________$_________________$ \n \
_____________$____$$$$$$$$$$$$$$ \n \
_____________$___$__$__$__$__$ \n \
_____________$__$$$$$$$$$$$$$$ \n \
_____________$__$___$__$__$__$ \n \
_____________$___$$$$$$$$$$$$$$$ \n \
____________$$$_________________$$$ \n \
__________$$___$$$_________$$$$$___$$ \n \
________$$________$$$$$$$$$__________$$$ \n \
_______$__$$_____________________$$$$___$$ \n \
____$$$$$___$$$$$$$$______$$$$$$$_______$_$ \n \
__$______$$_________$$$$$$______________$_$$ \n \
_$____$____$____________________________$_$_$ \n \
_$_____$___$______________$$$$$$$$$$$___$_$_$$ \n \
_$$$____$___$__$$$$$$$$$$$$__________$___$_$_$$ \n \
$___$$$$____$__$_____________________$___$_$$_$ \n \
$$$____$___$$__$_____________________$$__$_$__$ \n \
$___$__$__$$___$______________________$__$$$__$ \n \
$_____$$_$$____$_______________$$$____$__$_$__$ \n");

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
        printf("Elije un numero entre [1-100]\n");
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
// jueguito.exe
// clase