#include <stdio.h>
int main()
{
    int min = 9999999;
    int num, i, pos;
    for (i = 1; i <= 20; i++)
    {
        printf("POS %i: Ingrese un numero: ", i);
        scanf("%i", &num);
        if (num < min)
        {
            min = num;
            pos = i;
        }
    }
    printf("El menor valor ingresado fue: %i en la posicion: %i", min, pos);
    return 0;
}
