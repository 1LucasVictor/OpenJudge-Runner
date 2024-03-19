#include<stdio.h>
#include<math.h>

int main(){
	unsigned long long int a, b, d;
	unsigned long long int i, j;
	while(scanf("%lld %lld", &a, &b) != EOF){
		if(a > b){
			d = a;
			a = b;
			b = d;
		}
		j = b;
		i = a;
		while((d = b % a) != 0){
			if(d == 0) break;
			b = a;
			a = d;
		}
		i = i * j / a;
		printf("%lld %lld\n", a, i);
	}
	return 0;
}