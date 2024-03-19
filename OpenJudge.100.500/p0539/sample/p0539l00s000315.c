#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int i = 0, j;

    for(i=1; i<10; i++){
        for(j=0; j<10; j++){
            if(n == i * j){
                printf("Yes");
                return 0;
            }
        }
    }

    printf("No");  
}