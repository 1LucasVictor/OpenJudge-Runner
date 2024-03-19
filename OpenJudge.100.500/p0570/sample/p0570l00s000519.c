#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int sum;
    sum =A+B;
    if(sum%2==0){
        sum=sum/2;
        printf("%d",sum);
    }
    else {
        printf("IMPOSSIBLE");

    }return 0;
}
