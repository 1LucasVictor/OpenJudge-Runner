//?????????????????¢??°???goto???????????????????????´???
#include<stdio.h>

int main(void){
    int n;
    int i;
    int x;
    
    scanf("%d", &n);
    for(i = 1; i <=n; i++){
        x = i;
        if(x % 3 == 0){
            printf(" %d", i);
            continue;
        }
        do{
            if(x % 10 == 3){
                printf(" %d", i);
            break;
            }
            x /= 10;
        }while(x);
    }
    putchar('\n');
    
    return 0;
}