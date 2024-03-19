#include<stdio.h>
int main()
{
	int a,b,c=0,x=1;
	scanf("%d %d",&a,&b);
	while(x<b){
		x+=a-1;
		c++;
	}
	printf("%d\n",c);
	return 0;
}
