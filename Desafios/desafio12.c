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
            int opcion;
            printf("Ingresando sesion...\n");
            printf("Bienvenido %s\n", user);
            do
            {
                printf("Menu interactivo\n");
                printf("1. Calculadora\n");
                printf("2. Tabla de multiplicar\n");
                printf("3. Salir y cerrar sesion\n");
                printf("Ingrese una opcion:\n");
                scanf("%d" & opcion);
            } while (1);
        }
        else
        {
            printf("Los datos ingresados son incorrectos. Intentelo nuevamente\n");
        }
    } while (1);
    return 0;
}
