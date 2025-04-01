#include <stdio.h>
int main()
{
    //menu interactivo practica 2
    int opcion,a,b,subopcion,n,i;
    do {
    printf("Menu\n");
    printf("1. Calculadora\n");
    printf("2. Tabla de multiplicar\n");
    printf("0. Salir\n");
    scanf("%d",&opcion);
        switch (opcion){
            case 1: {
                printf("Ingresando a calculadora...\n");
           do{
                printf("1. Suma\n");
                printf("2. Restan\n");
                printf("3. Division\n");
                printf("0. volver al menu\n");
                scanf("%d",&subopcion);
                switch (subopcion){

                case 1: {
                printf("Suma\n");
                printf("Ingrese dos numeros para sumar\n");
                scanf("%d %d",&a,&b);
                printf("Resultado de %d + %d: %d\n",a,b,a+b);
                break;
            }
                case 2: {
                printf("Resta\n");
                printf("Ingrese dos numeros para restar\n");
                scanf("%d %d",&a,&b);
                printf("Resultado de %d - %d: %d\n",a,b,a-b);
                break;
            }
                case 3: {
                printf("Division\n");
                printf("Ingrese dos numeros para dividir\n");
                scanf("%d %d",&a,&b);
                printf("Resultado de %d / %d: %d\n",a,b,a/b);
                break;
            }
                case 0: {
                printf("\nVolviendo al menu...\n\n");
                break;
            }   default: {
                printf("Subopcion invalida...\n");
                break;
            }
        }
    }while (subopcion != 0);
    break;
}

               case 2: { 
               printf("Tabla de multiplicar\n"); 
               printf("Ingrese un numero entre [1-9] para mostar la tabla de multiplicar:\n");
               scanf("%d",&n);
               if (n>0 && n < 10){
                for (i=1;i<=10;i++){
                    printf("%d x %d = %d\n",n,i,n*i);
                }
            }
            break;
        }
        case 0: {
            printf("Finalizando el menu...\n");
            break;
        }
        default: {
            printf("Opcion invalida. Intente nuevamente.\n");
            break;
        }
    }
  } while (opcion != 0);
    return 0;
}
