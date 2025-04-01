#include <stdio.h>
int main()
{
    // calculadora
    int opcion, subopcion, a, b, num, i;
    do
    {
        printf("Bienvenido al menu interactivo\n");
        printf("1. Calculadora\n");
        printf("2. Tabla de multiplicar del [1-9]\n");
        printf("0. Para finalizar el programa:\n");
        printf("Ingrese una opcion:");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
        {
            printf("\nIngresando a la calculadora...\n");
        }
            printf("1. Suma\n");
            printf("2. Resta\n");
            printf("0. Volver al menu principal\n");
            printf("Ingrese una opcion:");
            scanf("%d", &subopcion);
            switch (subopcion)
            {
            case 1:
                printf("Ingrese dos numeros para sumar:\n");
                scanf("%d %d", &a, &b);
                printf("Resultado: %d\n", a + b);
                break;

            case 2:
                printf("Ingrese dos numeros para restar:\n");
                scanf("%d %d", &a, &b);
                printf("Resultado: %d\n", a - b);
                break;
            case 0:
                printf("Volviendo...\n");
                break;
            default:
                printf("Subopcion invalida, ingrese nuevamente:\n");
                scanf("%d", &subopcion);
                break;
            }
            break;
        case 2:
            printf("Ingrese un numero entre [1-9]:\n");
            scanf("%d", &num);
            if (num > 0 && num < 10)
            {
                for (i = 1; i <= 10; i++)
                {
                    printf("%d x %d = %d\n", num, i, num * i);
                }
            }
            break;
        case 0:
            printf("Finalizando programa...\n");
            break;

        default:
            break;
        }
    } while (opcion != 0);
    return 0;
}
