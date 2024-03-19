#include <stdio.h>

int main(void)
{
	int a,b,c,d,e;
	scanf("%d",&d);
	for(e=0;d>e;e++){
		scanf("%d %d %d",&a,&b,&c);
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}