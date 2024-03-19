#include <stdio.h>

int main(void){
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
   
    if(a == 0)c = 1;
    else if(a == 1)c = 100;
    else if(a == 2)c = 10000;
    
    if(b == 100)c = c * (b + 1);
    else c = c * b;
    
    printf("%d\n",c);
    return 0;
}
