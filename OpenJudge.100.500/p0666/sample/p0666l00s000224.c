#include <stdio.h>

int main(void){
    
    long int a,b,x;
    
    scanf("%ld %ld %ld",&x,&a,&b);
    
    if(a>=b)printf("delicious\n");
    if(a<b){
        if(b-a>x)printf("dangerous\n");
        else printf("safe\n");
    }
    
    return 0;
}