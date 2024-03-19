#include<stdio.h>
int main(void){
    int i,j,k,a;
    
    scanf("%d",&a);

    i=a/500;
    j=a%500;
    k=j/5;

    printf("%d\n",(i*1000)+(k*5));
    return 0;
    
}