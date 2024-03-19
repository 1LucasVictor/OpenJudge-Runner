#include <stdio.h>

int main(void){
    int n, m;
    int i;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        m = i;
        if(i % 3 == 0){
            printf(" %d", i);
        }else{
            do{
                if(m % 10 == 3){
                    printf(" %d", i);
                    break;
                }else{
                    m /= 10;
                }
            }while(m > 0);
       }
    }
    puts("");
    return 0;
}