#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializar la semilla para generar números aleatorios
    srand(time(NULL));

    printf("50 números aleatorios entre 0 y 100:\n");

    for (int i = 0; i < 50; i++)
    {
        int numero = rand() % 101; // Generar número aleatorio entre 0 y 100
        printf("%d ", numero);
    }

    printf("\n");
    return 0;
}
// desafio 24