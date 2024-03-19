#include <stdio.h>

int main(){
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b){
        x=a;
        a=b;
        b=x;
            }
    if(b > c){
        y=b;
        b=c;
        c=y;
    }
    if(a > b){
        z=a;
        a=b;
        b=z;
    }
    printf("%d %d %d\n",a,b,c);
    return(0);
    
}