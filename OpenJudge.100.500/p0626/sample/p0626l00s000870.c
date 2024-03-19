#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int D = 0;
    int N = 0;
    int result = 0;
    
    scanf("%d %d",&D,&N);
    
    if (D == 0) {
        result = N;
        printf("%d\n",result);
    }
    if (D == 1) {
        result = N * 100;
        printf("%d\n",result);
    }
    if (D == 2) {
        result = N * 10000;
        printf("%d\n",result);
    }
    return 0;
}
