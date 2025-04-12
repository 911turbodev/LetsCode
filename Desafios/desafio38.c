#include <stdio.h>
int main()
{
    int i, num, esPrimo = 0, max = -99999;
    for (i = 1; i <= 10; i++)
    {
        printf("POS [%i] Ingrese un numero: ", i);
        scanf("%i", &num);
        for (int j = 2; j <= num / 2; j++)
        {
            if (num % j == 1 && num > max)
            {
                max = num;
                esPrimo++;
            }
        }
    }
    if (esPrimo > 0)
    {
        printf("El mayor de los numeros primos fue: %i", max);
    }
    else
    {
        printf("No hay numeros primos\n");
    }
    return 0;
}
