#include<stdio.h>
int main()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
		s=(a+b);
		if(s%2==0)
		printf("%d\n",s/2);
		else{
		printf("IMPOSSIBLE");
	}
	return 0;
}