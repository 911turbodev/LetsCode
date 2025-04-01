#include <stdio.h>
int main()
{
    float promedio, notas, cantNotas, sum = 0;
    printf("Ingrese cantidad de notas que desea ingresar:\n");
    scanf("%f", &cantNotas);
    if (cantNotas > 0)
    {
        for (int i = 1; i <= cantNotas; i++)
        {
            printf("Ingrese nota [%d]:\n", i);
            scanf("%f", &notas);
            sum += notas;
        }
        promedio = sum / cantNotas;
        printf("El promedio es: %.2f", promedio);
    }
    else
    {
        printf("Cantidad invalida.\n");
    }
    return 0;
}
