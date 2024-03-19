#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	int i, j, ret, imod, jmod;
	scanf("%d %d",&i, &j);
	imod = i % 2019;
	jmod = j % 2019;
		
	if( j - i >= 2019 || jmod < imod ) ret = 0;
	else ret = (i * (i + 1)) % 2019;
	
	printf("%d\n", ret);
}
