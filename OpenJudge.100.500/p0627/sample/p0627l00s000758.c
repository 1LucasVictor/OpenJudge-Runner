#include <stdio.h>
int main(void){
    int a,b,max=0;
    scanf("%d%d",&a,&b);
    if(a+b>max) max=a+b;
    if(a-b>max) max=a-b;
    if(a*b>max) max=a*b;
    printf("%d",max);
    return 0;
}