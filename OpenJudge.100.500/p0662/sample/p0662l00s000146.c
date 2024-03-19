#include<stdio.h>
int main()
{
	int a,b,c,d;
	int sum;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>d||b<c)
		sum=0;
	else{
		if(b<d) sum=b-c;
		else sum=d-c;
	}
	printf("%d",sum);
	return 0;
}