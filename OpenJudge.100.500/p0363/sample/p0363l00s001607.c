#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b){
        x=a;
        a=b;
        b=x;
    }if(b>c){
        x=b;
        b=c;
        c=x;
    }if(a>b){
        x=a;
        a=b;
        b=x;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
