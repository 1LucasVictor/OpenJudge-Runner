#include <stdio.h>
#include <math.h>


int main(){
	long long int L, R;
	scanf("%lld %lld", &L, &R);

	if (L+(2019 - L%2019) <= R){
		printf("0");
		return 0;
	}

	long long int min=9999, ans = 0, tmp;
	int c;
	for(int i=0; i<R-L; i++){
		tmp = ((((L+i)%2019)*((L+i+1)%2019))%2019);
		if (tmp < min) {
			min = tmp;
			c = i;
		}
	}
	printf("%lld", min);

	return 0;
}