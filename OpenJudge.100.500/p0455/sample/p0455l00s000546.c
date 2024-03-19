#include <stdio.h>


int main(){

    int a,r;

    a = 2;
    if(1 <= a <= 10){
        r = a + a*a + a*a*a;
    }
    printf("%d\n",r);    
    
    return 0;
}