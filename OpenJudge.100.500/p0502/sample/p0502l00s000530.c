// b.c --- Papers, Please
#include <stdio.h>
int main(void){
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(x%2 == 0){
            if(x%3 != 0 && x%5 != 0){
                printf("DENIED");    
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}