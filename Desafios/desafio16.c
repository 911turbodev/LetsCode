#include <stdio.h>

int main()
{
    // Ejercicio [8]
    // El programa debe solicitar tres números y mostrar cuál es el mayor.
    // Si hay dos números iguales al mayor, indicarlo.
    int a, b, c;
    printf("Ingrese 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        if (a == b && a == c)
        {
            printf("[%d, %d y %d] son iguales\n", a, b, c);
        }
        else if (a == b)
        {
            printf("[%d y %d] son mayores e iguales\n", a, b);
        }
        else if (a == c)
        {
            printf("[%d y %d] son mayores e iguales\n", a, c);
        }
        else
        {
            printf("[%d] es el mayor\n", a);
        }
    }
    else if (b >= a && b >= c)
    {
        if (b == c)
        {
            printf("[%d y %d] son mayores e iguales\n", b, c);
        }
        else
        {
            printf("[%d] es el mayor\n", b);
        }
    }
    else
    {
        printf("[%d] es el mayor\n", c);
    }
    return 0;
}
