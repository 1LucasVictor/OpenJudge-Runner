#include<stdio.h>
#include<string.h>

int check(int *A, int num, int min_w, int truck_n){
    int i = 0;
    int sum = 0;
    int t_n = truck_n;
    
    while (1) {
        for (i = 0; i < num; i++) {
            
            if (sum + A[i] <= min_w) {
                sum += A[i];
            }else{
                sum = A[i];
                t_n--;
            }
        }
        
        if(t_n > 0){
            return min_w;
        }else{
            min_w++;
            t_n = truck_n;
            sum = 0;
        }
        
    }
}


int main( ){
    
    int i,n,k, ans;
    int max_v = 0;
    scanf("%d %d", &n, &k);
    
    int w[n];
    
    for (i=0; i<n; i++) {
        scanf("%d", &w[i]);
    }
    
    for (i=0; i<n; i++) {
        if (max_v < w[i]) {
            max_v = w[i];
        }
    }
    
    ans = check(w, n, max_v, k);
    
    printf("%d\n", ans);
    
    return 0;
}