#include<stdio.h>
int main(void){
    int S,s,m,h,a;
    scanf("%d",&S);
    s=S%60;
    a=S/60;
    m=a%60;
    h=a/60;
    printf("%d:%d:%d\n",h,m,s);
return 0;
}