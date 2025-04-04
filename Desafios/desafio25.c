#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarCarta(int carta)
{
    if (carta == 1)
    {
        printf("A");
    }
    else if (carta == 11)
    {
        printf("J");
    }
    else if (carta == 12)
    {
        printf("Q");
    }
    else if (carta == 13)
    {
        printf("K");
    }
    else
    {
        printf("%d", carta);
    }
}

int main()
{
    srand(time(NULL));
    int puntos = 1;
    int continuar = 1;

    while (continuar)
    {
        int carta = rand() % 13 + 1; // Genera una carta entre 1 y 13
        char eleccion;

        printf("Adivine si la carta es alta (A) o baja (B): ");
        scanf(" %c", &eleccion);

        if (carta == 7)
        {
            printf("¡Perdiste! La carta fue: ");
            mostrarCarta(carta);
            printf("\nPuntos acumulados: %d\n", puntos);
            break;
        }

        if ((eleccion == 'A' || eleccion == 'a') && carta > 7)
        {
            printf("¡Correcto! La carta fue: ");
            mostrarCarta(carta);
            printf("\n");
            puntos *= 2;
        }
        else if ((eleccion == 'B' || eleccion == 'b') && carta < 7)
        {
            printf("¡Correcto! La carta fue: ");
            mostrarCarta(carta);
            printf("\n");
            puntos *= 2;
        }
        else
        {
            printf("¡Perdiste! La carta fue: ");
            mostrarCarta(carta);
            printf("\nPuntos acumulados: %d\n", puntos);
            break;
        }
    }

    return 0;
}
// desafio 23