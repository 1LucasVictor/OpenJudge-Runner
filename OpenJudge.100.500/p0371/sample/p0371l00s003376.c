#include<stdio.h>
int main(void){
    int a,b,c,d,e,n;
    c=-1000000;
    d=1000000;
    e=0;
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%d",&b);
        if(b>c){
            c=b;
        };
        if(b<d){
            d=b;
        };
        e=e+b;
        };
        printf("%d %d %d\n",d,c,e);
return 0;
}