#include<stdio.h>
int main(){
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
		max=a;
	if(b>a&&b>c)
		max=b;
	if(c>a&&c>b)
		max=c;
	if(max==7)
	{
		if(a*b*c==175&&a+b+c==17)
			printf("YES\n");
		else
			printf("NO\n");
	}
	else
		printf("NO\n");
	}