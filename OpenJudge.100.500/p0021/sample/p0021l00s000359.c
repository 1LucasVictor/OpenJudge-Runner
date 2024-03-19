#include <stdio.h>

int N;
int a[5001];
 
int main(void){
    int i , j;
    while(scanf("%d", &N) != EOF) {
        if(N == 0) break;
        
        for(i = 0; i < N; ++i){
            scanf("%d", &a[i]);
        }
        
        int ans = a[0];
        for(i = 0; i < N; ++i){
            int sum = 0;
            for(j = i; j < N; ++j){
                sum += a[j];
                ans = (sum >= ans ? sum : ans);
            }
        }
        printf("%d\n" , ans);
    }
    return 0;
}
