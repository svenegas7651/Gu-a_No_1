#include<stdio.h>
int main()
{
    int testcase,num_elements,i=0,j,n,count=0,flag=0,temp;
    int array[1000000];
    scanf("%d",&testcase);
    while(testcase--)
    {
        scanf("%d",&num_elements);
        n=num_elements;
        while(i<n && scanf("%d",&array[i])==1)
        count=0;
        i++;
        for(j=1;j<=n-1;j++)
        {
            flag=0;
            for(i=0;i<=n-j-1;i++)
                {
                    if(array[i]>array[i+1])
                    {
                        temp=array[i];
                        array[i]=array[i+1];
                        array[i+1]=temp;
                        flag=1;
                        count++;
                    }
                }
        if(flag==0)
        {
            break;
        }

        }
            printf("%d\n",count);
    }
 return 0;
}
