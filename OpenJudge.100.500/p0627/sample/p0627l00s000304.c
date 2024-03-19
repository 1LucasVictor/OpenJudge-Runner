#include <stdio.h>
int main(void){
    int a,b,max=0;
    scanf("%d%d",&a,&b);
    int c=fmax(a+b,fmax(a-b,a*b));
    printf("%d",c);
    return 0;
}