#include <stdio.h>
int main()
{
    // Ejercicio[6]
    // Solicita un número al usuario y determina si es positivo, negativo o cero.
    // Si es positivo, verifica si es par o impar.
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("%d es un numero par positivo\n", num);
        }
        else
        {
            printf("%d es un numero impar positivo\n", num);
        }
    }
    else if (num < 0)
    {
        printf("%d es un numero negativo", num);
    }
    else
    {
        printf("El numero ingresado es cero");
    }
    return 0;
}
