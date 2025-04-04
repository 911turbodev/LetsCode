#include <stdio.h>
#include <windows.h> // Para usar gotoxy y otras funciones de Windows

// Función para posicionar el cursor en la consola
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    // Ejercicio [10]
    // El usuario elige la conversión:
    // Dólares a Euros
    // Dólares a Pesos
    // Euros a Dólares
    int opcion;
    float ars, eur, usd;

    do
    {
        system("cls"); // Limpia la pantalla
        gotoxy(40, 3);
        printf("=====================================");
        gotoxy(40, 4);
        printf("=          MENU DE CONVERSION       =");
        gotoxy(40, 5);
        printf("=====================================");
        gotoxy(40, 6);
        printf("=   1. Dolares a Euros              =");
        gotoxy(40, 7);
        printf("=   2. Dolares a Pesos              =");
        gotoxy(40, 8);
        printf("=   3. Euros a Dolares              =");
        gotoxy(40, 9);
        printf("=   0. Para finalizar               =");
        gotoxy(40, 10);
        printf("=====================================");
        gotoxy(40, 11);
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            system("cls");
            gotoxy(40, 3);
            printf("Conversor USD a EUR");
            do
            {
                gotoxy(40, 5);
                printf("Ingrese cantidad de USD que desea convertir a Euros: ");
                scanf("%f", &usd);
                if (usd > 0)
                {
                    gotoxy(40, 7);
                    printf("[%.2f USD a EUR son: %.2f]\n", usd, 0.90 * usd);
                }
                else
                {
                    gotoxy(40, 8);
                    printf("Valor ingresado invalido. Intente nuevamente.\n");
                }
            } while (usd <= 0);
            gotoxy(40, 10);
            printf("Presione cualquier tecla para volver al menu...");
            getch(); // Espera una tecla para continuar
            break;

        case 2:
            system("cls");
            gotoxy(40, 3);
            printf("Conversor USD a ARS");
            do
            {
                gotoxy(40, 5);
                printf("Ingrese cantidad de USD que desea convertir a ARS: ");
                scanf("%f", &usd);
                if (usd > 0)
                {
                    gotoxy(40, 7);
                    printf("[%.2f USD a ARS son: %.2f]\n", usd, 1310 * usd);
                }
                else
                {
                    gotoxy(40, 8);
                    printf("Valor ingresado invalido. Intente nuevamente.\n");
                }
            } while (usd <= 0);
            gotoxy(40, 10);
            printf("Presione cualquier tecla para volver al menu...");
            getch(); // Espera una tecla para continuar
            break;

        case 3:
            system("cls");
            gotoxy(40, 3);
            printf("Conversor EUR a USD");
            do
            {
                gotoxy(40, 5);
                printf("Ingrese cantidad de EUR que desea convertir a USD: ");
                scanf("%f", &eur);
                if (eur > 0)
                {
                    gotoxy(40, 7);
                    printf("[%.2f EUR a USD son: %.2f]\n", eur, 1.11 * eur);
                }
                else
                {
                    gotoxy(40, 8);
                    printf("Valor ingresado invalido. Intente nuevamente.\n");
                }
            } while (eur <= 0);
            gotoxy(40, 10);
            printf("Presione cualquier tecla para volver al menu...");
            getch(); // Espera una tecla para continuar
            break;

        case 0:
            system("cls");
            gotoxy(40, 5);
            printf("Finalizando programa...");
            break;

        default:
            gotoxy(40, 13);
            printf("Opcion invalida. Intente nuevamente.\n");
            Sleep(2000); // Pausa de 2 segundos antes de volver al menú
            break;
        }
    } while (opcion != 0);

    return 0;
}
