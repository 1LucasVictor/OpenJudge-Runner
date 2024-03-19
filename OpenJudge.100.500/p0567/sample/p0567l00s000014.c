#include<stdio.h>
int main(void)
{
	int a,b,c,i;
	scanf("%d%d%d",&a,&b,&c);

	
	
	for(i=1; i<=a-b; i++){
		c--;
		if(c==0)
		break;
	}
		
	
	printf("%d",c);
	
	return 0;
}