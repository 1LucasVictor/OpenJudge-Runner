#include <stdio.h>

int main(void)
{
	int a=0,b=0,c=0;
	int count=0;
	scanf("%d %d %d",&a,&b,&c);
	
	for(a;a<=b;a++){
		if(c%a==0){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}