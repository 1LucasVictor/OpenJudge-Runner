#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b&& b < c){
	printf("%d %d %d\n",a , b, c);
	}
	else if(a < b&&c < a){
		printf("%d %d %d\n",c,a,b);
		}
		
	else if(a < b&&b>c){
		printf("%d %d %d\n",a,c,b);}
	
	return (0);
	
}