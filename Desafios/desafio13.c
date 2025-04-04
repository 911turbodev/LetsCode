#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
    int opcion, subopcion;
    char user[10], pass[10];

    printf("Menu de ingreso\n");
    do
    {
        printf("Usuario: ");
        scanf("%s", user);
        printf("Pass: ");
        scanf("%s", pass);
        if (strcmp(user, "admin") == 0 && strcmp(pass, "admin") == 0)
        {
            printf("Ingresando...\n");
            Sleep(1500);
            printf("Bienvenido %s\n", user);
            Sleep(2000);
            do
            {
                printf("Menu de opciones\n");
                printf("1. Calculadora\n");
                printf("2. Tabla de multiplicar\n");
                printf("3. Para Salir\n");
                printf("Ingrese una opcion\n");
                scanf("%d", opcion);
                int a, b;
                switch (opcion)
                {
                case 1:
                    printf("Ingresando a calculadora...\n")
                        Sleep(2000);
                    printf("1. Suma\n");
                    printf("1. Resta\n");
                    printf("1. Division\n");
                    printf("1. Multiplicacion\n");
                    switch (subopcion)
                    {
                    case 1:
                        printf("Ingrese dos numeros para sumar:\n");
                        scanf("%d %d", &a, &b);
                        printf("Resultado de %d + %d: %d\n", a, b, a + b);
                        break;
                    case 2:
                        printf("Ingrese dos numeros para restar:\n");
                        scanf("%d %d", &a, &b);
                        printf("Resultado de %d - %d: %d\n", a, b, a - b);
                        break;
                    case 3:
                        printf("Ingrese dos numeros para dividir:\n");
                        scanf("%d %d", &a, &b);
                        printf("Resultado de %d / %d: %d\n", a, b, a / b);
                        break;
                    case 4:
                        printf("Ingrese dos numeros para dividir:\n");
                        scanf("%d %d", &a, &b);
                        printf("Resultado de %d / %d: %d\n", a, b, a / b);
                        break;
                    default:
                        printf("Opcion invalida, ingrese nuevamente una opcion entre [1-3]");
                        continue;
                    }
                    while (1)
                        ;
                    break;
                }
                else
                {
                    printf("Datos incorrectos, Ingrese nuevamente\n\n");
                    continue;
                }
            } while (1);
            return 0;
        }
