#include <stdio.h>
int main(){
    int a,b,c,d,min=0,max=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=c){
        min = a;
    }else{
        min = c;
    }
    if(b>=c){
        max=b;
    }else{
        max=d;
    }
    printf("%d\n",max-min);
}