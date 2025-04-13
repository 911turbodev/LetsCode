#include <stdio.h>
int main()
{
    int num, i, j, esPrimo, contadorPrimos = 0;
    for (i = 1; i <= 10; i++)
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
            for (j = 2; j * j <= num; j++)
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
    printf("Contador de numeros primos ingresados: %d", contadorPrimos);
    return 0;
}
