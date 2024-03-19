#include<stdio.h>

int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=a*b;
    if(sum%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
