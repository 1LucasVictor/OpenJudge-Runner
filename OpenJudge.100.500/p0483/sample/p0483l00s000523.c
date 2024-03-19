#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	if(n%10==7)
	{
	    printf("Yes");
	    return 0;
	}
	n=n/10;
	if(n%10==7)
	{
	    printf("Yes");
	    return 0;
	}
	n=n/10;
	if(n%10==7)
	{
	    printf("Yes");
	    return 0;
	}
	printf("No");
	return 0;
}