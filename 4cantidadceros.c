#include<stdio.h>
#include<math.h>

int contarceros(int num);
int main(void)
{
    int num,count;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    count = contarceros(num);
    printf("\n\nCantidad de ceros en %d: %d",num,count);
    printf("\n\n\n");
    return 0;
}

int contarceros(int n)
    {
    int count = 0;
    int i = 1;
    while(n/pow(5,i) != 0)
    count += n/pow(5,i++);
    return count;
    }
