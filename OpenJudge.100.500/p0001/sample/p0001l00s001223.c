#include<stdio.h>
int main(void)
{
	int i,a,x,b,c;
	x=0; c=1; b=1;
	while(scanf("%d%d",&a,&b)!=EOF){
		x=a+b;
		while(1){
			if(x/b!=0){
				c++;
				b*=10;
			}
			else break;
		}
		printf("%d\n",c);
	}
}