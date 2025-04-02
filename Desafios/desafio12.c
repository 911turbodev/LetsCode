#include <stdio.h>
int main()
{
    // crear un menu  para ingresar un usuario y una contraseña
    int opcion;
    char usuario[20], contrasena[20];
    char admin[10] = "admin";
    char pass[10] = "admin";
    do
    {
        printf("1. Ingresar usuario y contrasena\n");
        printf("2. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Ingrese usuario: ");
            scanf("%s", usuario);
            printf("Ingrese contrasena: ");
            scanf("%s", contrasena);
            if (strcmp(usuario, admin) == 0 && strcmp(contrasena, pass) == 0)
            {
                printf("Bienvenido %s\n", usuario);
            }
            else
            {
                printf("Usuario o contrasena incorrectos\n");
            }
            break;
        case 2:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion invalida\n");
            break;
        }
    } while (opcion != 2);
    return 0;
}
