#include <stdio.h>

int max(int,int,int);

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    
    int c,d,e;
    c=a+b;
    d=a-b;
    e=a*b;
    
    printf("%d",max(c,d,e));
    return 0;
}

int max(a,b,c){
    int max;
    max=a;
    if(b>max){max=b;}
    if(c>max){max=c;}
    
    return max;
}