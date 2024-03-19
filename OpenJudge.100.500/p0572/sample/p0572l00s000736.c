#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define min(x, y) ((x<y) ? (x) : (y))
#define abs(x)  ((x)>=0 ? (x) : ((x)*-1))

int main(){
	int L, R;
	scanf("%d %d", &L, &R);

	if (abs(L%2019) < abs(R%2019)){
		printf("%lld", (long long int)(L*(L+1)%2019));
	}else{
		printf("%lld", (long long int)(R*(R-1)%2019));
	}

	return 0;
}