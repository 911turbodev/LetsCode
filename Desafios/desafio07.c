#include <stdio.h>
#include <string.h>
#define MAX 100// long maxima de frases
int main()
{
    char frase1[MAX], frase2[MAX], frase3[MAX];
    int A,B,C;
    printf("Ingrese la primera frase:\n");
    fgets(frase1, MAX, stdin);
    printf("Ingrese la segunda frase:\n");
    fgets(frase2, MAX, stdin);  
    printf("Ingrese la tercera frase:\n");
    fgets(frase3, MAX, stdin);
        frase1[strcspn(frase1, "\n")] = '\0'; // Elimina el salto de línea
        frase2[strcspn(frase2, "\n")] = '\0'; // Elimina el salto de línea
        frase3[strcspn(frase3, "\n")] = '\0'; // Elimina el salto de línea
    A = strlen(frase1);
    B = strlen(frase2);
    C = strlen(frase3);
    printf("\nLa longitud de la primera frase es: %d\n\n", A);
    printf("La longitud de la segunda frase es: %d\n\n", B);
    printf("La longitud de la tercera frase es: %d\n\n", C);
    if (A > B)
    {
        if (B > C)
        {
            printf("%s\n%s\n%s\n", frase1, frase2, frase3);
        }
        else
        {
            if (A > C)
            {
                printf("%s\n%s\n%s\n", frase1, frase3, frase2);
            }
            else
            {
                printf("%s\n%s\n%s\n", frase3, frase1, frase2);
            }
        }
    }
    else
    {
        if (C > B)
        {
            printf("%s\n%s\n%s\n", frase3, frase2, frase1);
        }
        else
        {
            if (A > C)
            {
                printf("%s\n%s\n%s\n", frase2, frase1, frase3);
            }
            else
            {
                printf("%s\n%s\n%s\n", frase2, frase3, frase1);
            }
        }
    }
    return 0;
}
