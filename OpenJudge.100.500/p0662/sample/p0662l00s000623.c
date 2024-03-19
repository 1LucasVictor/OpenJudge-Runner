#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	if(c>=b||a>=d)
	printf("0");
	if(c<=b&&c>a&&d<=b)
	printf("%d",d-c);
	if(c<b&&c>a&&d>b)
	printf("%d",b-c);
	if(a<=d&&a>c&&b<=d)
	printf("%d",b-a);
	if(a<d&&a>c&&b>d)
	printf("%d",d-a);
	return 0;
	
}