#include<stdio.h>

int main(){
	int n,syakkin;

	scanf("%d",&n);
	syakkin=(int)100000*(1+0.05*n)+9999;
	syakkin=(syakkin/10000)*10000;

	printf("%d\n",syakkin);

	

	return 0;
}