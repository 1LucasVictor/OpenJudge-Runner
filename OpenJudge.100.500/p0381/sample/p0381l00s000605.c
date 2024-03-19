#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, x;
    int i, j, k;
    int c=0;
    
    scanf("%d %d", &n, &x);
    
    while(n != 0 && x != 0){
        c = 0;
        for(i=1; i<=n; i++){
            for(j=i+1; j<=n; j++){
                for(k=j+1; k<=n; k++){
                    if(x == i+j+k){
                        c++;
//                        printf("%d + %d + %d = %d\n", i, j, k, i+j+k);
                    }
                }
            }
        }
        scanf("%d %d", &n, &x);
        printf("%d\n", c);
    }
    
    return 0;
}

