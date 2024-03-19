#include<stdio.h>
#include<math.h>

int main(){
	unsigned long long int a, b, c, d;
	unsigned long long int i, j;
	if(a > b){
		d = a;
		a = b;
		b = d;
	}
	while(scanf("%lld %lld", &a, &b) != EOF){
		for(i = a; i < 200000000; i += a){
			if(i < b) continue;
			if(i % b == 0){
				d = i;
				break;
			}
		}
		for(i = a; i >= 1; i--){
			if(a % i != 0 || b % i != 0){
				continue;
			}else{
				c = i;
				break;
			}
		}
		printf("%lld %lld\n", c, d);
	}
	return 0;
}