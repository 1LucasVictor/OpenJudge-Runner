#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int A = 0;
    int B = 0;
    
    scanf("%d %d",&A,&B);
    
    if (A > 8 || B > 8) {
        printf(":(\n");
    }
    
    if (A <= 8 && B <= 8) {
        printf("Yay!\n");
    }
    
    return 0;
}
