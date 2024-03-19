#include <stdio.h>

int main()
{

int a,b,x;

scanf("%d %d %d",&a,&b,&x ) ;
if(a>=1 &&a<=100 && b>=1 && b<=100 && x>=1 &&a<=200 ) {


if(x>a && x<(a+b)) {
	
	printf("YES") ;
}
else {
	
	printf("NO") ;
}
}
}