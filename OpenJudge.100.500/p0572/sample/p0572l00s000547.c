#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define min(x, y) ((x<y) ? (x) : (y))
#define abs(x)  ((x)>=0 ? (x) : ((x)*-1))

int main(){
	long long int L, R;
	scanf("%lld %lld", &L, &R);

	if (L+(2019-L%2019) < R){
		printf("0");
		return 0;
	}

	if (abs(L%2019) < abs(R%2019)){
		printf("%lld", (long long int)(L*(L+1)%2019));
	}else{
		printf("%lld", (long long int)(R*(R-1)%2019));
	}

	return 0;
}