#include<stdio.h>
int main()
{
	int x,y,t;

	scanf("%d%d",&x,&y);

	t=4*x;
	for(int i=0;i<=x;i++)
		if(t-i*2==y){
			puts("Yes");
			return 0;
		}
	puts("No");
	return 0;
}