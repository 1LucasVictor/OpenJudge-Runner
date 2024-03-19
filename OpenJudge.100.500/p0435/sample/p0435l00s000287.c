#include <stdio.h>
#include <math.h>

int main(){
	int N, D, count = 0;

	scanf("%d %d", &N, &D);
	long x, y;

	for(int i=0; i<N; i++){
		scanf("%ld %ld", &x, &y);
		if(sqrt(pow(x,2)+pow(y, 2)) <= D)
			count++;
	}
	printf("%d", count);
	return 0;
}
