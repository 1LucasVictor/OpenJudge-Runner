#include<stdio.h>
int main(void)
{
	int a,x,s[101];
	x=0;
	while((scanf("%d",&a))!=EOF){
		x++;
		if(a!=0){
			s[x]=a;
		}
		else if(a==0){
			printf("%d\n",s[x-1]);
			x-=2;
		}
	}
	return 0;
}