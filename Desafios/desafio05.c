#include <stdio.h>
int main()
{
    int n, i;
    printf("Ingrese un numero entre [1-10] para conocer su tabla de multiplicar.\n");
    scanf("%d",&n);
    do{
        if (n>0 && n <=10){
        for (i = 1; i<= 10; i++){
            printf("%d x %d = %d\n",n,i,n*i);
        }
        printf("Ingrese otro numero para multiplicar. (0 para salir):\n");
        scanf("%d",&n);
        }else {
            printf("Numero invalido...\n");
            scanf("%d",&n);
        }
    }while (n != 0);
    return 0;
}
