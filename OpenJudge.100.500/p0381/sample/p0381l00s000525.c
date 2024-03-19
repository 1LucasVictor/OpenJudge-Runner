#include <stdio.h>
int main(void){
    int n, x, s;
    int i, j, k;
    for(;;){
        scanf("%d %d",&n, &x);
        s = 0;
        if(n == 0 && x == 0){
            break;
        }
        int i, j, k;
        for(i = 1; i < n-1; i++){
            for(j = i+1; j < n; j++){
                for(k = j+1; k <= n; k++){
                    if(i + j + k == x){
                        s++;
                    }
                }
            }
        }
        printf("%d\n",s);
    }
    return 0;
}


