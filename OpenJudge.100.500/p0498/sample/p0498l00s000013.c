#include <stdio.h>

int main(){
	int N;
	int total;
	scanf ("%d",&N);
	total = N/2;
	(N%2==0) ? printf ("%d",total) : printf ("%d",total+1);
	return 0;
}