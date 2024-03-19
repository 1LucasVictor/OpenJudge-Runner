#include<stdio.h>

int main()
{
	int a,b,c,m,k,l;
	while((scanf("%d %d",&a,&b))!=EOF){
		k=a;
		l=b;
		c=a%b;
		while(c!=0){
			c=a%b;
			a=b;
			b=c;
		}
		m=k/a*l;
		printf("%d %d\n",a,m);
	}
	return 0;
}