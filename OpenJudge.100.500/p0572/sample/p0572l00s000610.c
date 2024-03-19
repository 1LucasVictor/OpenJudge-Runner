#include <stdio.h>

void main(){
	long int l,r;
	scanf("%ld%ld",&l,&r);
	l = l%2019; r = r%2019;
	
	int min = 2018;
	for (int i=l; i<=r-1; i++){
		for (int j=i+1; j<=r; j++){
			int minkamo = i*j % 2019;
			if (minkamo < min) min = minkamo;
		}
	}
	
	printf("%d",min);
}