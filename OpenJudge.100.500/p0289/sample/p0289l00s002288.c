#include<stdio.h>
int main(){
  int a,b,c,r;
    scanf("%d%d",&a,&b);
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("%d\n",a);
    return 0;
}

