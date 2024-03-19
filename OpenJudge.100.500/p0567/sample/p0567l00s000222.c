#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf ("%d",&a);
	scanf ("%d",&b);
	scanf ("%d",&c);
	if(a-b<=c)
	  printf("%d",c-(a-b));
	else 
	  printf("%d",0);
	
	// your code goes here
	return 0;
}
