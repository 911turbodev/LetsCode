#include <stdio.h>
int main()
{
    // menu de inicio
    char user[10], pass[10];
    printf("Menu de inicio de sesion\n");
    do
    {
        printf("Ingrese su usuario:\n");
        scanf("%s", user);
        printf("Ingrese su password:\n");
        scanf("%s", pass);
        if (strcmp(user, "admin") == 0 && strcmp(pass, "admin") == 0)
        {
            int opcion, subopcion, a, b, n, i;
            printf("Ingresando sesion...\n");
            printf("Bienvenido %s\n", user);
            do
            {
                printf("Menu interactivo\n");
                printf("1. Calculadora\n");
                printf("2. Tabla de multiplicar\n");
                printf("3. Salir y cerrar sesion\n");
                printf("Ingrese una opcion:\n");
                scanf("%d", &opcion);
                if (opcion == 1)
                {
                    printf("Ingresando menu calculadora\n\n");
                    do
                    {
                        printf("Menu calculadora\n");
                        printf("1. Suma\n");
                        printf("2. Resta\n");
                        printf("3. Division\n");
                        printf("4. Multiplicacion\n");
                        printf("0. Para volver\n");
                        printf("Ingrese una opcion\n");
                        scanf("%d", &subopcion);
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
                            do
                            {
                                printf("Ingrese dos numeros para dividir:\n");
                                scanf("%d %d", &a, &b);
                                if (b == 0)
                                {
                                    printf("No se puede dividir por cero. Ingrese otro numero:\n");
                                    continue;
                                }
                                else
                                {
                                    printf("Resultado de %d / %d: %d\n", a, b, a / b);
                                    break;
                                }
                            } while (1);
                            break;
                        case 4:
                            printf("Ingrese dos numeros para multiplicar:\n");
                            scanf("%d %d", &a, &b);
                            printf("Resultado de %d * %d: %d\n", a, b, a * b);
                            break;
                        case 0:
                            printf("Volviendo al menu anterior..\n");
                            break;
                        default:
                            printf("Opcion invalida\n");
                            break;
                        }
                    } while (subopcion != 0);
                    break;
                }
                if (opcion == 2)
                {
                    printf("Ingresando menu tabla de multiplicar\n");
                    do
                    {
                        printf("Ingrese un numero entre [1-10]");
                        scanf("%d", &n);
                        if (n > 0 && n < 11)
                        {
                            for (i = 1; i <= 10; i++)
                            {
                                printf("%d x %d = %d\n", n, i, n * i);
                            }
                            break;
                        }
                        else
                        {
                            printf("Numero ingresado invalido.\n");
                        }
                    } while (1);
                }
                if (opcion == 3)
                {
                    printf("Cerrando sesion...\n");
                    return 0;
                }

            } while (1);
        }
        else
        {
            printf("Los datos ingresados son incorrectos. Intentelo nuevamente\n");
        }
    } while (1);
    return 0;
}
