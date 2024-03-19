#include <stdio.h>

int main(void)
{
    int n, x;
    int i, j, k;
    int count;
    
    while(1){
        scanf("%d%d", &n, &x);
        if(!n&&!x){
            break;
        }
        count = 0;
        for(i=1; i<n-1; i++){
            for(j=i+1; j<n; j++){
                for(k=j+1; k<=n; k++){
                    if(i+j+k==x){
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}