#include <stdio.h>

int main(void) {
	int s;
	scanf("%d",&s);
	int s1=s/100,s2=(s-s1*100)/10,s3=s%100-s2*10;
	printf("%d\n",s1+s2+s3);
	return 0;
}