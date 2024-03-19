#include <stdio.h>
int main(void){
    int A,B,temp=1,count=0;
    scanf("%d",&A);
    scanf("%d",&B);
    while(temp < B)
    {
        count++;
        temp = temp - 1 + A;
    }
    printf("%d\n",count);
}
