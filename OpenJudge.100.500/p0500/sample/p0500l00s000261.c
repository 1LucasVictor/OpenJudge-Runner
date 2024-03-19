#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
typedef long long ll;

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	if (m == 0){
		if (n = 1){
			printf("0");
			return 0;
		}else if(n = 2){
			printf("10");
			return 0;
		}else{
			printf("100");
			return 0; 
		}
	}
	int s[m], c[m];
	rep(i, m){
		scanf("%d%d", &s[i], &c[i]);
		if(s[i] > n){
			printf("-1");
			return 0;
		}
	}
	rep(i, m){
		rep(j, m){
			if ((s[i] == s[j]) && (c[i] != c[j])){
				printf("-1");
				return 0;
			}
		}
	}
	if(n == 1){
		printf("%d", c[0]);
		return 0;
	}
  	rep(i, m)
      if ((s[i] == 1) && (c[i] == 0)){
    	printf("-1");
      	return 0;
    }
	if(n == 2){
		int xx = 1, x = 0;
		rep(i, m){
			if (s[i] == 1)	xx = c[i];
            else x = c[i];
		}
		printf("%d%d", xx, x);
		return 0;
	}
	if(n == 3){
		int xxx = 1, xx = 0, x = 0;
		rep(i, m){
			if (s[i] == 1)	xxx = c[i];
			else if (s[i] == 2)	xx = c[i];
			else x = c[i];
		}
		printf("%d%d%d", xxx, xx, x);
		return 0;
	}
		
}