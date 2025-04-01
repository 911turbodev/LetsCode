#include <stdio.h>
int main()
{
    int edad;
    float altura;
    char nombre[10];
    printf("Ingrese su nombre:\n");
    scanf("%s", &nombre);
    printf("Ingrese su edad:\n");
    scanf("%d", &edad);
    printf("Ingrese su altura:\n");
    scanf("%f", &altura);
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f\n", altura);
    return 0;
}
