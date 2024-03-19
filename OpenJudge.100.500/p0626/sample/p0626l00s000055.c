#include <stdio.h>

int main(void){
	int d,n;
	scanf("%d%d", &d, &n);
	long long ans=0;
	if(d == 0){
        if(n==100){
          n +=1;
        }
		printf("%d\n",n);
	}
	else if(d == 1){
		ans= n * 100;
		if(n==100){
			ans += 100;
		}
		printf("%lld\n", ans);
	}
	else {
		ans = n * 10000;
		if(n==100){
			ans += 10000;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
