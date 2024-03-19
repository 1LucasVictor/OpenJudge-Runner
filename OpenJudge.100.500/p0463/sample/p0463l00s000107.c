#include <stdio.h>

int main() {
    
    int N;
    
    scanf("%d",&N);
    
    int x = N % 10;
    
    if (x == 2 || x == 4 || x == 5 || x == 7 || x == 9){
        printf("hon\n");
    }
    if (x == 0 || x == 1 || x == 6 || x == 8){
        printf("pon\n");
    }
    if (x == 3){
        printf("bon\n");
    }
    
    return 0;
}
