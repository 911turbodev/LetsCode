#include <stdio.h>
int main()
{
    int num, i, j, esPrimo, contadoPrimos = 0;
    for (i = 1; i < 11; i++)
    {
        printf("POS [%d] Ingrese un numero: \n", i);
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
                else
                {
                    esPrimo = 1;
                }
            }
            contadoPrimos++;
        }
    }
    printf("Contador de numeros primos: %d", contadoPrimos);
    return 0;
}
