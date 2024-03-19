#include <stdio.h>
int main(void){
    // Your code here!
    int i, j, H, W; 
    scanf("%d%d", &H, &W); 
    while(H != 0 && W != 0) { 
        for(i = 0; i < W; i++) { 
            printf("#"); } 
            printf("\n"); 
            for(i = 0; i < H - 2; i++) { 
                printf("#"); 
                for(j = 0; j < W - 2; j++) { 
                    printf("."); } 
                    printf("#\n"); } 
                    for(i = 0; i < W; i++) { 
                        printf("#"); } 
                        printf("\n"); 
                        printf("\n"); 
                        scanf("%d%d", &H, &W); } 
                        return 0; 
}

