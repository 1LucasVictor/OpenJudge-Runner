#include <stdio.h>

int main(void){

    int n, r;

    scanf("%d", &n);
    

    if(n % 2 == 0){
        r = n/2;
    }else{
        r = n/2 +1;
    }

     printf("%d\n", r);

     return 0;
}