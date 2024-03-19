#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    if(c<=a-b){
        c=a-b;
    }
    else if(c<=a*b){
        c=a*b;
    }
    printf("%d\n",c);
    return 0;
}