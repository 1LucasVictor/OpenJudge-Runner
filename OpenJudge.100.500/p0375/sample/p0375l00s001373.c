#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, i, x;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        x = i;
        if(x % 3 == 0){
            printf(" %d", i);
        }else{
            while(x){
                if (x % 10 == 3){
                    printf(" %d", i);
                    break;
                }
                x /= 10;
            }
        }
    }
    printf("\n");
    return 0;
}

