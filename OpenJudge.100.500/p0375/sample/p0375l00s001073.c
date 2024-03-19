#include <stdio.h>
int main(void){
    int x, i, n;
    scanf("%d", &x);
    i=1;
    
    while(i <= x){
        n=i;
        if(n%3 == 0){
            printf(" %d", i);
        }
        else{
            do{
                if(n%10 == 3){
                    printf(" %d", i);
                    break;
                }
                n /= 10;
            }while(n);
        }
        i++;
    }
    printf("\n");
    return 0;
}

