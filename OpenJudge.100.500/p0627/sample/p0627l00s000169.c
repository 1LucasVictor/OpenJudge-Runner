#include<stdio.h>

int main(){
	
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a+b;
	
	if (c<a-b)
	 c=a-b;
	 else if (c<a*b)
	 c=a*b;
	
	printf("%d",c);
	return 0;
}