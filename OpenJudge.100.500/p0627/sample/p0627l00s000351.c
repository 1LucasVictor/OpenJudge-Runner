#include<stdio.h>
int main(void){
    int a,b,add,sub,mul,max=-10000000;
    scanf("%d %d",&a,&b);
    add=a+b;
    if(add>max)max=add;
    sub=a-b;
    if(sub>max)max=sub;
    mul=a*b;
    if(mul>max)max=mul;

    printf("%d\n",max);

    return 0;
}

