#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int i,k;
	int num;
	long long min, max,sum;

	scanf("%d", &i);
	scanf("%d", &num);
	sum = num;
	min = num;
	max = num;
	
	for(k=1;k<i;k++){
		scanf("%d", &num);
		sum = sum+num;
		if (min > num) {min = num;}
		if (max < num) {max = num;}
	
	}

	printf("%lld %lld %lld\n", min, max, sum);

	return 0;

}
