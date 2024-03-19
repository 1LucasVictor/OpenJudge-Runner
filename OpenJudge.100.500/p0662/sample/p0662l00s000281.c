#include<stdio.h>
int main(){
    int a,c,b,d,min,max;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    if(a>c)
        min=a;
    else
        min=c;
    if(b<d)
        max=b;
    else
        max=d;
    if(b<=c)
        printf("0\n");
    else
    printf("%d\n",max-min);
    }
