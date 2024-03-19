#include<stdio.h>
int main(void){
    int n,i,b,c,d,e,f;
    b=100;
    d=100000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=b*1.05;
        e=d*1.05;
        if(c*1000!=e){
            c=c+1;
        }
        b=c;
        d=e;

    }
    printf("%d\n",c*1000);
    return 0;
}