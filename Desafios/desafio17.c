#include <stdio.h>
#include <windows.h>
int main()
{
    //  Ejercicio [9]
    //  Solicita la edad de una persona y clasifica en:
    //  Menor de edad(< 18 años)
    //  Adulto(18 - 64 años)
    //  Adulto mayor(≥65 años)

    int edad;
    do
    {
        printf("Ingrese edad [-1 para finalizar el programa]\n");
        scanf("%d", &edad);
        if (edad >= 0)
        {
            if (edad > 64)
            {
                printf("[Adulto mayor]\n\n");
            }
            else if (edad > 17)
            {
                printf("[Adulto]\n\n");
            }
            else
            {
                printf("[Menor de edad]\n\n");
            }
        }
        if (edad == -1)
        {
            printf("Finalizando programa...\n");
            Sleep(1000);
            break;
        }
    } while (1);
    return 0;
}
