#include <stdio.h>
int main()
{
	int n;
	int a,b;
	int c=0;
	scanf("%d",&n);
	for(a=1;a<10;a++){
		for(b=1;b<10;b++){
			if(a*b==n)
			c=1;
		}
	}
	if(c==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}