#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
	long long l,r,i,j;
	int min;
	scanf("%ld%ld",&l,&r);
	if(((l+r)/2)*((l+r)/2)<2019&&((l+r)/2+1)*((l+r)/2+1)<2019)printf("%d\n",l*(l+1));
	else if(l<=2019&&r>=2019)printf("0\n");
	else{
		min=2019;
		for(i=l;i<r;i++)
				for(j=i+1;j<=r;j++)
					if(i*j%2019<min)min=i*j%2019;
			printf("%d\n",min);
	}			
	return 0;
}