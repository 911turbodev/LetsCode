#include <stdio.h>
int main()
{
    int mayor = -999999;
    int num, i;
    printf("Bienvenido\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese un numero para cargar en modulo %i: ", i);
        scanf("%i", &num);
        if (num > mayor)
        {
            mayor = num;
        }
    }
    printf("El mayor es: %i", mayor);
    return 0;
}
