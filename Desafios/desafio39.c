#include <stdio.h>
int main()
{
    // 1. Hacer un programa para ingresar 10 números.
    // El mismo debe analizar y mostrar por pantalla cuántos de esos números son primos.
    int i, j, num, esPrimo, contadorPrimos = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("POS [%d] Ingrese un numero: ", i);
        scanf("%d", &num);
        if (num <= 1)
        {
            esPrimo = 0;
        }
        else
        {
            esPrimo = 1;

            for (j = 2; j <= num / 2; j++)
            {
                if (num % j == 0)
                {
                    esPrimo = 0;
                    break;
                }
            }
        }
        if (esPrimo == 1)
        {
            contadorPrimos++;
        }
    }
    printf("Cantidad de numeros primos ingresados: %d\n", contadorPrimos);
    return 0;
}
