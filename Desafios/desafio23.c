#include <stdio.h>

int main()
{
    int numero;

    // Solicitar al usuario que ingrese un número de 4 cifras
    printf("Ingrese un número de 4 cifras: ");
    scanf("%d", &numero);

    // Validar que el número tenga 4 cifras
    if (numero < 1000 || numero > 9999)
    {
        printf("Por favor, ingrese un número válido de 4 cifras.\n");
        return 1;
    }

    // Separar y mostrar las cifras
    int millar = numero / 1000;
    int centena = (numero / 100) % 10;
    int decena = (numero / 10) % 10;
    int unidad = numero % 10;

    printf("Las cifras son: %d, %d, %d, %d\n", millar, centena, decena, unidad);

    return 0;
}
// desafio 21