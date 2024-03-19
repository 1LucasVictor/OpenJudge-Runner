#include<stdio.h>
int main(void)
{
	int a,b,i,x,y;
	scanf("%d%d",&x,&y);
	
	if(x<y){a=x;}
	else{a=y;}
	
	for(i=2;i<a;i++){
		if(x%i==0 && y%i==0)b=i;
	}
	printf("%d\n",b);
	
	return 0;
}