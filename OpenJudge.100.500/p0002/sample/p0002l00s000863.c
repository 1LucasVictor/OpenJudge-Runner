#include<stdio.h>
int main(void)
{
	int i,n,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		scanf("%d %d %d",&a,&b,&c);
		if(c*c ==(a*a+b*b)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}