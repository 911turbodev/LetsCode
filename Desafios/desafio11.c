#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tabla[10][10], i, j;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            tabla[i][j] = (i + 1) * (j + 1);
        }
    }
    // imprimir tabla
    printf("Tabla de multiplicar\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%10d", tabla[i][j]);
        }
        printf("\n");
    }
    return 0;
}
