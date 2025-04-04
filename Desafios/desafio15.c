#include <stdio.h>
int main()
{
    // ejercicio [7]
    // El programa debe pedir,  hasta que el usuario indique que ya no debe ingresar más notas
    // una nota (0-100) e indicar la calificación:
    // 90 - 100 : Sobresaliente 80 - 89 : Muy Bueno 70 - 79 : Bueno 60 - 69 : Aprobado
    // Menos de 60 : Reprobado
    float notas;
    do
    {
        printf("Ingrese una nota (0-100) o -1 para salir: ");
        scanf("%f", &notas);
        if (notas >= 0 && notas <= 100)
        {
            if (notas >= 90)
            {
                printf("Sobresaliente\n");
            }
            else if (notas >= 80)
            {
                printf("Muy bueno\n");
            }
            else if (notas >= 70)
            {
                printf("Bueno\n");
            }
            else if (notas >= 60)
            {
                printf("Aprobado\n");
            }
            else
            {
                printf("Reprobado\n");
            }
        }
        if (notas == -1)
        {
            printf("Finalizando programa...\n");
            break;
        }
    } while (notas != -1);
    return 0;
}
