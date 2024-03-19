#include<stdio.h>
#include<string.h>

int check(int *A, int num, int min_w, int max_w, int truck_n){
    int i = 0;
    int sum = 0;
    int ans = 0;
    int t_n = truck_n;
    int left = min_w;
    int right = max_w;
    int mid;
    
    while (left < right) {
        
        mid = (left + right)/2;
        t_n = truck_n;
        sum = 0;
        
        for (i = 0; i < num; i++) {
            
            if (sum + A[i] <= mid) {
                sum += A[i];
            }else{
                sum = A[i];
                t_n--;
            }
        }
        
        if (t_n > 0) {
            ans = mid;
            right = mid -1;
        }else{
            left = mid+1;
        }
        
    }
    return ans;
}


int main( ){
    
    int i,n,k, ans, sum;
    int max_v = 0;
    scanf("%d %d", &n, &k);
    
    int w[n];
    
    for (i=0; i<n; i++) {
        scanf("%d", &w[i]);
    }
    sum = 0;
    for (i=0; i<n; i++) {
        if (max_v < w[i]) {
            max_v = w[i];
        }
        sum += w[i];
    }
    
    ans = check(w, n, max_v, sum, k);
    
    printf("%d\n", ans);
    
    return 0;
}