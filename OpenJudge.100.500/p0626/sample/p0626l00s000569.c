#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int D = 0;
    int N = 0;
    int result = 0;
    
    scanf("%d %d",&D,&N);
    
    if (D == 0) {
        if (N == 100) {
            result = 101;
        }else{
            result = N;
        }
        printf("%d\n",result);
    }else if (D == 1) {
        if (N == 100) {
            result = 10100;
        }else{
            result = N * 100;
        }
        printf("%d\n",result);
    }else if (D == 2) {
        if (N == 100) {
            result = 1010000;
        }else{
            result = N * 10000;
        }
        printf("%d\n",result);
    }
    return 0;
}