#include<stdio.h>
int main(void)
{
	int i,l,m,n,x,y;
	i=1;
	scanf("%d",&n);
	m=100000;
	while(i<=n) {
		m=m*105/100;
		x=m%1000;
		if(x!=0) {
			y=1000-x;
			m=m+y;
		}
		i+=1;
	}
	printf("%d\n",m);
	return 0;
}