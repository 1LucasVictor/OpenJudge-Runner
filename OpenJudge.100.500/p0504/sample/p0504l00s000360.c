#include <stdio.h>

int main()
{
	int h;
	int a;
	int b;
	int d;
	scanf ("%d %d",&h,&a);
	
	if (h%a==0){
		b=h/a;
		printf("%d",b);
	}
	else {
		d=(h/a)+1;
		printf ("%d",d);
	}
	
	return 0;
}