#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, x;
    int i, j, k;
    int c;
    
    while(1){
        scanf("%d %d", &n, &x);
        if(n == 0 && x == 0){
            break;
        }
        c = 0;
        for(i=1; i<=n-2; i++){
            for(j=i+1; j<=n-1; j++){
                for(k=j+1; k<=n; k++){
                    if(x == i+j+k){
                        c++;
//                        printf("%d + %d + %d = %d\n", i, j, k, i+j+k);
                    }
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
