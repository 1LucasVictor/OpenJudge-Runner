#include<stdio.h>
int main(){
    int a,b,c,h;
    h=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        h=b;
        b=a;
        a=h;
    }
    if(b>c){
        h=c;
        c=b;
        b=h;
    }
    if(a>b){
        h=b;
        b=a;
        a=h;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}
