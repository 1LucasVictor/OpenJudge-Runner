 
long long fiboDP(int n) { 
    long long fibo_dp[200] = {0}; 
              fibo_dp[0] = 1;
              fibo_dp[1] = 1; 
              for(int i=2; i<=n; i++) {
                  fibo_dp[i] = fibo_dp[i-1] + fibo_dp[i-2];
                  } return fibo_dp[n]; 
     
}
int main(void){ 
    int n; scanf("%d\n", &n); 
    printf("%lld\n", fiboDP(n)); 
    return 0; } 

