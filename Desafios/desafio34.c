#include <stdio.h>
int main()
{
    int i, num, max = -99999999, pos;
    for (i = 1; i <= 10; i++)
    {
        printf("POS %i Ingrese un numero: ", i);
        scanf("%i", &num);
        if (num > max)
        {
            max = num;
            pos = i;
        }
    }
    printf("El valor maximo ingresado fue: %i en la posicion: %i", max, pos);
    return 0;
}
