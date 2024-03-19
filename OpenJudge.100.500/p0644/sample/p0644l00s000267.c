#include <stdio.h>
 
int main(void){
	
	int a,x;
	x = 0;
	
	scanf("%d",&a);
	
	if(a/100==1) x = x + 1;
	if((a/10)%10==1) x = x + 1;
	if(a%10==1) x = x + 1;
	
	printf("%d\n",x);
	return 0;
}