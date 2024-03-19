#include <stdio.h>

int main(void) {
	// your code goes here
		int n,i,a=0;
	scanf("%d",&n);
	if(7==n/100)a=1;
	i=n%100;
	if(7==i/10)a=1;
	i%=10;
	if(7==i)a=1;
	if(a)printf("Yes");else{
		printf("No");
	}
	return 0;
}