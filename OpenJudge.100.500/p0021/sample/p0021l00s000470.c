#include <stdio.h>

int N;
int a[5000];
int S[5000];

int main() {
    int i, j;
    while(scanf("%d", &N) != EOF) {
        if(N == 0) break;
        
        int prev = 0;
        for(i = 0; i < N; ++i) {
        	scanf("%d", &a[i]);
        	S[i] = a[i] + prev;
        	prev = S[i];
        }
        
        int ans = 0;
        for(i = 0; i < N; ++i) {
        	for(j = i; j < N; ++j) {
        	    int x;
        	    if(i == 0) {
        	        x = S[j];	
        	    } else {
        	        x = S[j] - S[i-1];
        	    }
        	    
        	    if(x > ans) {
        	        ans = x;
        	    }	
        	}
        }
        printf("%d\n", ans);
    }
}
