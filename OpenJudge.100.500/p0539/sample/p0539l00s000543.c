/* ex3_3
   kohei_suzuki */

#include <stdio.h>

int main(void){
    int n, m=9 ;

    scanf("%d",&n);

    int l = n / m;

    while(n % m != 0 && m > 0){
        m -= 1;
        l = n / m;
    }

    if(l < 10 && m != 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}