#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, esPrimo, opc = 1;
    while (opc == 1)
    {
        printf("Ingrese un numero para saber si es primo o no: \n");
        scanf("%i", &num);
        if (num <= 1)
        {
            printf("No es primo\n");
            return 0;
        }
        esPrimo = 1; // para reiniciar la variable para cada numero ingresado
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo)
        {
            printf("%i es primo\n", num);
        }
        else
        {
            printf("%i no es primo\n", num);
        }
        printf("Quiere buscar otro numero?\n1. Si\n2. No\n");
        scanf("%i", &opc);
        system("cls");
    }
    return 0;
}
