#include <stdio.h>
#include <math.h>


main()
{
int a,b,d;
char c;
while(1){
	scanf("%d %c %d",&a,&c,&b);
	if(c=='?')break;
	if(c=='+')d=a+b;
	if(c=='-')d=a-b;
	if(c=='*')d=a*b;
	if(c=='/')d=a/b;
	printf("%d\n",d);
}
}
