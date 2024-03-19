#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2!=0){
		n=n/2;
		n=n+1;
	}
	else{
		n=n/2;
	}
	printf("%d\n",n);
	return 0;
}
