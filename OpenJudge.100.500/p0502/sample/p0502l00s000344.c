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
		if(a[i] % 2 == 0){
			if((a[i] % 3 != 0) && (a[i] % 5 != 0)){
				printf("DENIED");
				return 0;
			}
		}
	}
	printf("APPROVED");
	return 0;
}

