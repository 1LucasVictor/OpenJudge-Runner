#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long int L,R;
	scanf("%lu %lu",&L,&R);
	
	int i,j;
	unsigned long int min = 10^9*2;
	unsigned long int dat;

	unsigned long int tmp;
	if(R-L>=2019){
		printf("0\n");
	}
	else{
	  for(i=L;i<R;i++){
		for(j=i+1;j<R+1;j++){
			dat=i*j;
			dat%=2019;
			
			if(min > dat) min = dat;
		}
	  }
	}
	
	
	printf("%lu\n",min);
	return 0;
}