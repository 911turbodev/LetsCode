#include <stdio.h>
#define edadMinima 18
int main()
{
    int edad, cont = 0, sum = 0, i, promedio;
    for (i = 1; i <= 20; i++)
    {
        printf("Posicion [%i] Ingrese una edad: ", i);
        scanf("%i", &edad);
        if (edad >= edadMinima)
        {
            sum += edad;
            cont++;
        }
    }
    promedio = sum / cont;
    printf("Personas mayores de 18 son: %i\nPromedio de edad de mayores de 18: %i", cont, promedio);
    return 0;
}
