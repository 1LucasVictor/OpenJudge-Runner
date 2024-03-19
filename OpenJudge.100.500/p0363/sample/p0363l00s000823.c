#include<stdio.h>

int main (void)
{
	
	int a, b, c;
	
	int min, mid, max;

	scanf("%d %d %d",&a, &b, &c);

	if(a >= b && b >= c) {
	min = c;
	mid = b;
	max = a;
	} else if(a >= c && c >= b) {
	min = b;
	mid = c;
	max = a;
	} else if(b >= a && a >=c) {
	min = c;
	mid = a;
	max = b;
	} else if(b >= c && c >= a) {
	min = a;
	mid = c;
	max = b;
	} else if(c >= b && b >= a) {
	min = a;
	mid = b;
	max = c;
	} else if(c >= a && a >= b){
	min = b;
	mid = a;
	max = c;
	}

	printf("%d %d %d\n",min,mid,max);

	return 0;
}
	