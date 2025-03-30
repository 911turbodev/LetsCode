#include <stdio.h>
int main()
{
    //crear un menu interactivo
    int opcion, subopcion;
    do {
        printf("Menu Interactivo\n");
        printf("1. Calculadora\n");
        printf("2. Tabla de multiplicar 1-9\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: \n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("\nMenu calculadora\n");
                printf("1. Sumar\n");
                printf("2. Restar\n");  
                printf("0. Regresar al menu principal\n");
                printf("Seleccione una subopcion: \n");
                scanf("%d", &subopcion);
                switch (subopcion) {
                    case 1:
                        printf("Suma seleccionada\n");
                        printf("Ingrese dos numeros: ");
                        int num1, num2;
                        scanf("%d %d", &num1, &num2);
                        printf("Resultado: %d\n", num1 + num2);
                        break;
                    case 2:
                        printf("Resta seleccionada\n");
                        printf("Ingrese dos numeros: ");
                        scanf("%d %d", &num1, &num2);
                        printf("Resultado: %d\n", num1 - num2);
                        break;
                    case 0:
                        printf("Regresando al menu principal...\n");
                        break;
                    default:
                        printf("Subopcion invalida, intente de nuevo\n");
                        break;
                }
                
                break;
            case 2:
                printf("Tabla de multiplicar\n");
                printf("Ingrese un numero (1-9): \n");
                int num;
                scanf("%d", &num);
                if (num >1 && num < 10){
                    for (int i = 1; i <= 10; i++){
                        printf("%d x %i = %d\n",num,i,num*i);
                    }
                }
                break;
            case 0:
                printf("Finalizando programa...\n");
                break;
            default:
                printf("Opcion invalida, intente de nuevo\n");
                break;
        }
    }   while (opcion !=0);
    return 0;
}
