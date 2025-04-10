#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num, max = -99999, min = 99999;
    for (i = 1; i <= 20; i++)
    {
        printf("[%i] Ingrese un numero: ", i);
        scanf("%i", &num);
        if (num % 2 == 0 && num > max)
        {
            max = num;
        }
        else if (abs(num) % 2 == 1 && num < min)
        {
            min = num;
        }
    }
    printf("El maximo de los numeros pares fue: %i\n", max);
    printf("El minimo de los numeros impares fue: %i\n", min);
    return 0;
}
