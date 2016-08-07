#include"stdio.h"
#include<string.h>

int min[12] = {100};
int coin[3] = {1, 3, 5};

void
findMin (int sum) 
{
    int i = 0; int j=0;
    min [0] = 0; 

    for (i = 1; i <= sum; i++) {
        for (j=0; j<= 2; j++) {
             if (coin[j] <= i) {
                if ((1 + min[(i - coin[j])]) <= min[i]) { 
                    min[i] = 1 + min[(i-coin[j])]; 
                    printf("\nsetting min[%d] %d",i, min[i]);
                }
            }
        }
    }
}
void
initializeMin()
{
    int i =0;
    for (i=0; i< 12; i++) {
        min[i] = 100;
    }
}
void
dumpMin() 
{
    int i =0;
    for (i=0; i< 12; i++) {
        printf("\n Min[%d]: %d", i, min[i]);
    }
}
int main() 
{
    initializeMin();
    findMin(11);
    dumpMin(); 
}