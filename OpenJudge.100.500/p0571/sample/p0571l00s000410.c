#include <stdio.h>
int main(void){
    
    int a,b,n;
    scanf("%d %d %d",&n,&a,&b);
    if(a>b)a=b;
    printf("%d\n",n*a);    
}