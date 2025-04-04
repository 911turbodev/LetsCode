#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int puntos = 1, totalPuntos = 0;
    char eleccion;
    int carta, continuar = 1;

    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    printf("Bienvenido al juego de Poker Alta-Baja!\n");
    printf("Debes adivinar si la carta es alta (A) o baja (B).\n");
    printf("Si la carta es 7, pierdes automáticamente.\n");

    while (continuar)
    {
        // Generar una carta aleatoria entre 1 y 13
        carta = rand() % 13 + 1;

        printf("\nAdivina: Alta (A) o Baja (B): ");
        scanf(" %c", &eleccion);

        if (carta == 7)
        {
            printf("La carta es 7. Perdiste!\n");
            continuar = 0;
        }
        else if ((carta < 7 && (eleccion == 'B' || eleccion == 'b')) ||
                 (carta > 7 && (eleccion == 'A' || eleccion == 'a')))
        {
            printf("Correcto! La carta era %d.\n", carta);
            totalPuntos += puntos;
            puntos *= 2; // Doblar los puntos
        }
        else
        {
            printf("Incorrecto! La carta era %d. Perdiste!\n", carta);
            continuar = 0;
        }
    }

    printf("\nJuego terminado. Puntos totales: %d\n", totalPuntos);
    return 0;
}
// desafio 22