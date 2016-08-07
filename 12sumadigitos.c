#include <stdio.h>
int addNumbers(int n);

int main()
{
    int n;
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);
    printf("La Suma de sus digitos es= %d",addNumbers(n));
    return 0;
}
int addNumbers(int n)
{
    if(n!=0)
        return n+addNumbers(n-1);
    else
        return n;
}