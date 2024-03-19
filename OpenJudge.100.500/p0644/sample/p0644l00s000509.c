#include <stdio.h>

int main(void) {
	int s;
	scanf("%d",&s);
	int count;
	count=s/100+(s%100)/10+((s%100)%10);
	printf("%d",count);
	return 0;
}
