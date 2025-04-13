#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Se dispone de una lista de [5 listas] de números enteros separados entre ellos por ceros.
    // Se pide determinar e informar:
    // El número de grupo con mayor porcentaje de números impares respecto al total de números que forman el grupo.
    // Informar cuántos grupos están formados por todos números ordenados de mayor a menor.
    int i, num;

    // Inicializar el generador de números aleatorios con una semilla
    srand(time(NULL));

    // generador de numeros aleatorios
    for (i = 1; i <= 10; i++)
    {
        num = rand() % 100 + 1;
        printf("POS [%d] Numero aleatorio: %d\n", i, num);
    }
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }

    return 0;
}
