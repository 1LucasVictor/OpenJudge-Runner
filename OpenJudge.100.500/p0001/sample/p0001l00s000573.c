#include <stdio.h>

int main(void)
{
	int a,b;
	int r = 0;
	while(scanf("%d %d",&a,&b) != EOF){
		a += b;
		while(a >0){
			r++;
			a /= 10;
		}
		
		printf("%d\n",r);
		r = 0;
	}
	return 0;
}