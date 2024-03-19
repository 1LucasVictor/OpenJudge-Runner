#include<stdio.h>
int main(){
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    printf("%s\n",x>=a && x<=a+b?"YES":"NO");
}