#include <stdio.h>
int main()
{
    // Ejercicio [10]
    // El usuario elige la conversión:
    // Dólares a Euros
    // Dólares a Pesos
    // Euros a Dólares
    int opcion;
    float ars, eur, usd;
    do
    {
        printf("**************************\n");
        printf("* [Conversion de moneda] *\n");
        printf("**************************\n");
        printf("*   1. Dolares a Euros   *\n");
        printf("*   2. Dolares a Pesos   *\n");
        printf("*   3. Euros a Dolares   *\n");
        printf("*   0. Para finalizar    *\n");
        printf("**************************\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("\nConversor USD a EUR\n");
            do
            {
                printf("Ingrese cantidad de USD que desea convertir a Euros:\n");
                scanf("%f.2", &usd);
                if (usd > 0)
                {
                    printf("[%.2f USD a EUR son: %.2f] \n\n", usd, 0.90 * usd);
                }
                else
                {
                    printf("Valor ingresado invalido.\n");
                }
                break;
            } while (usd > 0);
            break;
        case 2:
            printf("\nConversor USD a Ars\n");
            do
            {
                printf("Ingrese cantidad de USD que desea convertir a Ars:\n");
                scanf("%f.2", &usd);
                if (usd > 0)
                {
                    printf("[%.2f USD a Ars son: %.2f] \n\n", usd, 1310 * usd);
                }
                else
                {
                    printf("Valor ingresado invalido.\n");
                }
                break;
            } while (usd > 0);
            break;
        case 3:
            printf("\nConversor Eur a USD\n");
            do
            {
                printf("Ingrese cantidad de Eur que desea convertir a USD:\n");
                scanf("%f.2", &eur);
                if (eur > 0)
                {
                    printf("[%.2f Eur a USD son: %.2f] \n\n", eur, 1.11 * eur);
                }
                else
                {
                    printf("Valor ingresado invalido.\n");
                }
                break;
            } while (usd > 0);
        }
    } while (opcion != 0);
    if (opcion == 0)
    {
        printf("Finalizando programa...");
    }
    return 0;
}
