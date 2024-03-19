#include<stdio.h>

int main(void)
{
	int a,b,l,s,t;

	while(scanf("%d %d",&a,&b)!=EOF){
		l = a>b ? a:b;
		s = a>b ? b:a;
		while(l%s !=0){
			t=l;
			l=s;
			s=t%l;
		}
		printf("%d %d\n",s,a*(b/s));
	}
}