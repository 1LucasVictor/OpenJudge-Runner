#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n%2==1){
		n=n/2+1;
	}
	else {
		n=n/2;
	}
	printf("%d\n",n);
	return 0;
}