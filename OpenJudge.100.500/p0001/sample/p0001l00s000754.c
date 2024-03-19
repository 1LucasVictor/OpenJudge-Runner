#include <stdio.h>

int main(void)
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		//scanf("%d %d",&a,&b);
		a=a+b;
		int count=0;
		while(a>0){
			a/=10;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
