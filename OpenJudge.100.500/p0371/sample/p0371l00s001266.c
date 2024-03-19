#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int i;
	int min;
	int max;
	long long sum = 0;
	int a;

	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d",&a);

		if (i == 0){
			min = a;
			max = a;
		}else{
			if (a < min) min = a;
			if (a > max) max = a;
		}

		sum += a;
	}


	printf("%d %d %d\n",min,max,sum);

	
	return 0;
}