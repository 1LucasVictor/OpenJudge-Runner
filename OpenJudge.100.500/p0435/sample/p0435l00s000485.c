#include <stdio.h>

int main(){
	int n;
	long long d;
	scanf("%d%lld", &n, &d);
	int x, y, cnt = 0;
	for(int i = 0; i < n; i++){
		scanf("%d%d", &x, &y);
		if(x * 1ll * x + y * 1ll * y <= d * d){
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
	
}