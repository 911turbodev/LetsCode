#include <stdio.h>
int main()
{
    int i, j, num, esPrimo, contadoPrimos = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("POS [%d] INGRESE UN NUMERO: ", i);
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
            contadoPrimos++;
        }
    }
    printf("Cantidad de numeros primos: %d", contadoPrimos);
    return 0;
}
