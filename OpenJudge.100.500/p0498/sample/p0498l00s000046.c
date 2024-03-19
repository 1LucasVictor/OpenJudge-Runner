#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	if (n % 2 == 0)	n /= 2;
	else n = n / 2 + 1;
	printf("%d", n);
	return 0;
}
