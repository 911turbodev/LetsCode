#include <stdio.h>
int main()
{
    int n, sumaEntero = 0, i;
    printf("Ingrese un numero:\n");
    scanf("%d",&n);    
    for (i = 1; i <= n; i++){
        sumaEntero+=i; 
    }
    printf("El resultado de la suma de numeros enteros es: %d",sumaEntero);
    return 0;
}
