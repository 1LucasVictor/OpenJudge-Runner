#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		scanf("%d %d %d",&a,&b,&c);
		if(c==sqrt(a*a+b*b)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}