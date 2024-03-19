#include <stdio.h>
#define NUMBER 1000
int main(void)
{
	int i,n;
	int a[NUMBER];
	
	scanf ("%d",&n);
	
	for (i = 0; i < n; i++) {
		scanf ("%d",&a[i]);
	}
	for (i = 0; i < (n/2); i++) {
		int temp = a[i];
		a[i] = a[(n-1)-i];
		a[(n-1)-i] = temp;
	}
	for (i =0; i < n-1; i++) {
		printf ("%d ",a[i]);
	}
	int P = a[n-1];
	printf ("%d\n",P);
	
	return 0;
}