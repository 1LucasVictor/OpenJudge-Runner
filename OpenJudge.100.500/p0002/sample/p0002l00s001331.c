#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		scanf("%d %d %d",&a,&b,&c);
		a<=1000;
		b<=1000;
		c<=1000;
		if(c==sqrt(a*a+b*b)){
			printf("YES\n");
		}
		if(c!=sqrt(a*a+b*b)){
			printf("NO\n");
		}
	}
	return 0;
}