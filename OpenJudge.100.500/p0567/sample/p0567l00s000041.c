#include<stdio.h>
int main(void)
{
	int a,b,c,i;
	scanf("%d%d%d",&a,&b,&c);
	
	if(c==0){
		puts("0");
	
		return 0;
	}
	
	
	else{
	for(i=1; i<=a-b; i++)
		c--;
	}
	
	printf("%d",c);
	
	return 0;
}