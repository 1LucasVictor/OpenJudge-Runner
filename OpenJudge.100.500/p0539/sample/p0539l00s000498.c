#include <stdio.h>
int main(void){
    int a, b, c;
    int flag = 0;
    scanf("%d", &a);
    for(c = 1; c <= 9; c++){
        for(b = 1; b <= 9; b++){
            if(a == b * c){
                flag = 1;
                // printf("あった");
            }
            // printf("%2d ", b * c);
        }
        // printf("\n", c);
    }    
    if(flag == 1){
        printf("Yes");
    }else{
        printf("No");
    }
    
    
}
