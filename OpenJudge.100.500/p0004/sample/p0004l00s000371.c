#include<stdio.h>
int main(void){
  long long int a, b, x, y, z, m, n;

  while(scanf("%lld %lld", &a, &b) != EOF){
	x = a;
	y = b;

	if (b > a){
		x = b;
		y = a;
	}

while(x != y){
		z = y;
		y = x - y;
		x = z;

		if (y > x){
			m = x;
			x = y;
			y = m;
		}	
	}	

	n = a * b / y;

    printf("%lld %lld\n", y, n); 
  }
    return 0;
}