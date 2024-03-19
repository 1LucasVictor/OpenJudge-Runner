#include <stdio.h>
#include <math.h>

int d, n;

int solve(){
	switch(d){
		case 0:
			if(n == 100) return 101;
			return n;
		case 1:
			if(n == 100) return 10100;
			return n * 100;
		case 2:
			if(n == 100) return 1010000;
			return n * 10000;
	}
}

int main()
{
	scanf("%d%d", &d, &n);

	printf("%d\n", solve());

	return 0;
}