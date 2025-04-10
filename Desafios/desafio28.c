#include <stdio.h>
int main()
{
    int num, i, positivos = 0;
    for (i = 1; i <= 20; i++)
    {
        printf("Ingrese un numero para cargar en el modulo %i: ", i);
        scanf("%i", &num);
        if (num > 0)
        {
            positivos++;
        }
    }
    printf("Cantidad total de positivos es: %d", positivos);
    return 0;
}
