#include<stdio.h>

int main(){
	
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a+b;
	
	if (c<a-b)
	 c=a-b;
	 else if (c<a*b)
	 c=a*b;
	 
	 if (a==0 && b<0)
	 c=0;
	
	printf("%d",c);
	return 0;
}