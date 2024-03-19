#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long int L,R;
	scanf("%ld %ld",&L,&R);
	
	int i,j;
	long int min = 10^9*2;
	long int dat;
	for(i=L;i<R;i++){
		for(j=i+1;j<R+1;j++){
			dat=i*j%2019;
			if(min > dat) min = dat;
		}
	}
	printf("%ld\n",min);
	return 0;
}