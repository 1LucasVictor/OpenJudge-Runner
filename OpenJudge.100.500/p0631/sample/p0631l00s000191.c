#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d %d %d",&A,&B,&X);
    int sum;
    sum =A+B;
    sum=sum-B;
    if(sum>=X){
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}
