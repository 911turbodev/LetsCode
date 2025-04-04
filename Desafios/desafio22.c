#include <stdio.h>

int main()
{
    int numero, primeraCifra, segundaCifra;

    // Solicitar al usuario que ingrese un número de 2 cifras
    printf("Ingrese un número de 2 cifras: ");
    scanf("%d", &numero);

    // Validar que el número tenga 2 cifras
    if (numero < 10 || numero > 99)
    {
        printf("Por favor, ingrese un número válido de 2 cifras.\n");
        return 1;
    }

    // Separar las cifras
    primeraCifra = numero / 10; // Obtener la primera cifra
    segundaCifra = numero % 10; // Obtener la segunda cifra

    // Mostrar las cifras separadas
    printf("Primera cifra: %d\n", primeraCifra);
    printf("Segunda cifra: %d\n", segundaCifra);

    return 0;
}
// desafio 20