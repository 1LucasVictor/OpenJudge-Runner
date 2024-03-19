#include<stdio.h>

int main(){
    int a,b,add,sub,mul;
    scanf("%d",&a);
    scanf("%d",&b);

    add=a+b;
    sub=a-b;
    mul=a*b;


    if(add>sub && add>mul) printf("%d",add);

    else if(mul>add && mul>sub) printf("%d",mul);

    else printf("%d",sub);


   
return 0;
}
