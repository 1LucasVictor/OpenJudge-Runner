#include <stdio.h>
int main(void){
    int n, i, j, k, x, ans = 0;
    
    while(1){
        scanf("%d %d", &n, &x);
        
        if(n==0 && x==0){
            break;
        }
        
        ans = 0;
        
        for(i=1; i<=n; i++){
            for(j=2; j<=n; j++){
                for(k=3; k<=n; k++){
                    if((i+j+k)==x && i<j && j<k){
                        ans = ans + 1;
                    }
                }
            }
        }
        
        printf("%d", ans);
    }
    
    return 0;
}

