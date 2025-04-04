#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Solicitar al usuario dos números en base 7
    printf("Ingrese el primer número (una cifra en base 7): ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número (una cifra en base 7): ");
    scanf("%d", &num2);

    // Validar que los números estén en el rango de una cifra en base 7 (0 a 6)
    if (num1 < 0 || num1 > 6 || num2 < 0 || num2 > 6) {
        printf("Error: Los números deben estar entre 0 y 6.\n");
        return 1;
    }

    // Convertir los números de base 7 a base 10, sumar y convertir de nuevo a base 7
    sum = num1 + num2;

    // Si la suma excede 6, ajustar para que sea en base 7
    int carry = sum / 7; // Llevar si la suma excede 6
    int result = sum % 7;

    // Mostrar el resultado
    if (carry > 0) {
        printf("Resultado en base 7: %d%d\n", carry, result);
    } else {
        printf("Resultado en base 7: %d\n", result);
    }

    return 0;
}