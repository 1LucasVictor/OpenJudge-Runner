#include <stdio.h>
int main (void){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=a-b;
    c=c-d;
    if(c<0){
        c=0;
    }
    printf("%d",c);
    return 0;

}