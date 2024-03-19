#include<stdio.h>
#include<stdlib.h>
int main()
{
	int L, R, i, min_temp ;
	int min= 2019;

	scanf("%d", &L);
	scanf("%d", &R);

	if(R-L >= 2019){
		min = 0;
		printf("%d", min);
		return 0;
	}

	for(i=L; i<R; i+=2){
		min_temp = (i*(i+1))%2019;
		if(min_temp < min){
			min = min_temp;
		}
	}
	
	printf("%d", min%2019);		

	return 0;
}
