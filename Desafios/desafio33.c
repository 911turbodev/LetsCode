#include <stdio.h>
#include <stdlib.h>
int main()
{
    int esPrimo, num, i, opc = 1;
    while (opc == 1)
    {
        printf("Ingrese un numero:\n");
        scanf("%i", &num);
        if (num <= 1)
        {
            printf("%i: No es primo\n", num);
            return 0;
        }
        esPrimo = 1;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                esPrimo = 0;
                break;
            }
            else if (num % i == 1)
            {
                esPrimo = 1;
            }
        }
        if (esPrimo == 0)
        {
            printf("%i: No es primo\n", num);
        }
        else
        {
            printf("%i: es primo\n", num);
        }
        printf("Desea ingresar otro numero?\n1. Si\n2.No\n");
        scanf("%i", &opc);
        system("cls");
        if (opc != 1)
        {
            printf("Finalizando programa...\n");
        }
    }
    return 0;
}
