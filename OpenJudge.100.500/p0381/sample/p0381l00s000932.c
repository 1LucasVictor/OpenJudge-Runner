#include<stdio.h>

int main(){
    int i,j,k,x,n;
    int count;
    while(1){
        scanf("%d %d", &n ,&x);
        if(x == 0 && n == 0) break;
        count = 0;
        for(i = 1;i <= n-2;i++){
            for(j = i + 1; j <= n-1; j++){
                for(k = j + 1; k <= n; k++){
                    if(i+j+k==x) count+=1;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

