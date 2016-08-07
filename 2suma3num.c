#include <stdio.h>
 int main( void )
{
    int num1; 
    int num2; 
    int num3; 
    int sum;
    printf( "Ingrese el primer numero\n" );
    scanf( "%d", &num1 );
    printf( "Ingrese el segundo numero\n" );
    scanf( "%d", &num2 );
    printf( "Ingrese el tercer numero\n" );
    scanf( "%d", &num3 );
    sum = num1 + num2 + num3;
    printf( "La suma de los 3 numeros ingresados es %d\n", sum );
}
