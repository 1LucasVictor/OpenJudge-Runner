#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void){
	int i, j, ret;
	scanf("%d %d",&i, &j);
	i = i % 2019;
	j = j % 2019;
		
	if( i >= j ) ret = 0;
	else ret = i * (i+1);
	
	printf("%d\n", ret);
}
