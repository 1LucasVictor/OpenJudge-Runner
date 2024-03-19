#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
#define MOD 1000000007
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
  	rep(i, n) scanf("%d", &a[i]);
	rep(i, n){
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}

