#include <stdio.h>
int main() 
{
    int num1;
    int num2;
    int sum;
    printf("Ingrese dos numeros (separados por un espacio): ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("La suma de los 2 numeros es %d\n", sum);
}
