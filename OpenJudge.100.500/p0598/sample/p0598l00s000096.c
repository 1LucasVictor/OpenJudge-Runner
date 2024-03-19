#include<stdio.h>

int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    if(b%a==0){
        sum=a+b;
        printf("%d",sum);
    }
    else{
        sum=b-a;
        printf("%d",sum);
    }


    return 0;
}