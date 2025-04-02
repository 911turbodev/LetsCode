#include <stdio.h>

int main()
{
    int edad, i, n;
    printf("Ingrese cuantas edades va a registrar: [0] para finalizar.\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n > 0)
        {
            int sum = 0; // reinicia la suma
            for (i = 1; i <= n; i++)
            {
                printf("Ingrese edad [%d]:\n", i);
                scanf("%d", &edad);
                sum += edad;
            }
            printf("El promedio de edades ingresado es: %d\nIngrese [0] para finalizar o otro numero para seguir calculando\n", sum / n);
        }
        else
        {
            printf("Número inválido. Ingrese nuevamente. [0] para finalizar.\n");
        }
        scanf("%d", &n);
    }
    printf("Finalizando programa...\n");
    return 0;
}
