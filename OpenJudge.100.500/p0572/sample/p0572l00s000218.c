//ABC133C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	long long int l,r;
	long long int temp, min;
	long long int i, j;
	scanf("%lld %lld",&l,&r);
	min = l*(l+1)%2019;
	if(r-l<2019){
		for(i=l;i<r-1;i++){
			for(j=i+1;j<r;j++){
				temp = (i*j)%2019;
				if(temp<min){
					min = temp;
				}else{
					min = min;
				}
			}
		}
	}else{
		min = 0;
	}
	printf("%lld",min);
	return 0;
}