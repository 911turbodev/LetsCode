#include <stdio.h>
int main()
{
    int n, i;
    printf("Ingrese un numero para calcular su factorial:\n");
    scanf("%d", &n);
    do
    {
        if (n > 0 && n <= 15)
        {
            int resultado = 1;
            for (i = 1; i <= n; i++)
            {
                resultado *= i;
            }
            printf("El factorial de %d es: %d\n", n, resultado);
            printf("Ingrese otro numero para calcular o 0 para salir:\n");
            scanf("%d", &n);
        }
        else
        {
            printf("Numero invalido...\n");
            scanf("%d", &n);
        }
    } while (n != 0);
    return 0;
}
