#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int p=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%10==7)
		p=1;
		n=n/10;
	}
	if(p==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
