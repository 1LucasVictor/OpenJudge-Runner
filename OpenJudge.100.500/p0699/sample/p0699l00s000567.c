#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a == b && a == 5) || (a == c && a == 5) || (b == c && b == 5))
	{
		if(a + b + c == 17)
		printf("YES\n");
	}
	else
		printf("NO\n");
		return 0;
}
