#include<stdio.h>
int main(){
    int t;
    int a,b,c;
    scanf("%d",&t);
    a=t/3600;
    b=(t-a*3600)/60;
    c=t-a*3600-60*b;
    printf("%d:%d:%d\n",a,b,c);
    return 0;
}