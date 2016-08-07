#include <stdio.h>
int main()
    {
    int num,cnt=0,i=1;
    printf("Ingrese un número: ");
    scanf("%d",&num);
    while(i<=32)
    {
    if(num&(1<<i))
    cnt++;
    i++;
    }
    printf("El total de bits en el numero digitado es: %d",cnt);
    return 0;
	system("PAUSE");
}
