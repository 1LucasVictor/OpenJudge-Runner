    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
     
    #define BIG 2000000007
     
    #define MOD 1000000007
    typedef unsigned long long ull;
    typedef   signed long long sll;
     
     
    #define N_MAX 100
    #define M_MAX 20
     
    ull n, m, k;
    ull h, w;
    ull a[N_MAX];
    // ull b[M_MAX][N_MAX];
    ull dp[N_MAX][M_MAX + 1];
    // char s[N_MAX][M_MAX + 1];
     
    void swap_adj(ull *a, ull *b){
    	ull tmp = *b;
    	*b = *a;
    	*a = tmp;
    	return;
    }
     
    int comp(const void *a, const void *b){
    	if (*(ull*)a > *(ull*)b) {
    		return -1;
    	} else if (*(ull*)a < *(ull*)b) {
    		return +1;
    	} else {
    		return 0;
    	}
    }
     
    ull divide(ull a, ull b){
    	ull x = MOD - 2;
    	ull ans = 1;
    	while (x) {
    		if (x & 1) ans = (ans * b) % MOD;
    		b = (b * b) % MOD;
    		x /= 2;
    	}
    	return (a * ans) % MOD;
    }
     
    int digits(ull x){
    	int i = 1;
    	while (x >= 10) {
    		x /= 10;
    		i++;
    	}
    	return i;
    }
     
    int min(ull x, ull y){
    	return (x < y) ? x : y;
    }
     
    ull solve(){
    	int i, j;
     
    	i = n / 100;
    	j = n % 10;
     
    	if (i == j) {
    		puts("Yes");
    	} else {
    		puts("No");
    	}
     
    }
     
    int main(void){
    	ull i, j;
    	int a, b, c, d;
     
    	scanf("%d%d%d%d", &a, &b, &c, &d);
     
    	if (a < c) a = c;
    	if (b > d) b = d;
     
    	if (a > b) a = b;
    	printf("%d\n", b - a);
     
    	// solve();
     
    	return 0;
    }