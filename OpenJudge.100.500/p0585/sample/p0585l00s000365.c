#include<stdio.h>
int main(){
    int a,b,t;
    scanf("%d%d%d",&a,&b,&t);
    printf("%d\n",((int)(t+0.5))/a*b);
    return 0;
}