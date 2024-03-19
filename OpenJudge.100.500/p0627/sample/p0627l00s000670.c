#include<stdio.h>
int main(){
    int a,b,max;
    scanf("%d%d",&a,&b);
    max=(a+b>a-b)?a+b:a-b;
    max=(a*b>max)?a*b:max;
    printf("%d",max);
    return 0;
}