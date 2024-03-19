#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
	long long l,r,i,j;
	int min=2019;
	scanf("%ld%ld",&l,&r);
			for(i=l;i<r;i++)
				for(j=i+1;j<=r;j++)
					if(i*j%2019<min)min=i*j%2019;
			printf("%d\n",min);
		
				
	return 0;
}