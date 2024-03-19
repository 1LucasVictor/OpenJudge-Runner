#include<stdio.h>
int main(void)
{
	int a,b,x,y,n;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&x);
	y=a+b;
	if(y>=x && a<=x){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
	return 0;
}
