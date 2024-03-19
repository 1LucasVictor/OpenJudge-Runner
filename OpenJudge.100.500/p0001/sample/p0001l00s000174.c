#include <stdio.h>

int main(void)
{
	int d1,d2,c,d;
	
	while(scanf("%d %d",&d1,&d2)!=EOF){
		c=0;
		d = (d1+d2)/10;
		while(d!=0){
			d/=10;
			c++;
		}
		printf("%d\n",c+1);
	}

	return 0;
}