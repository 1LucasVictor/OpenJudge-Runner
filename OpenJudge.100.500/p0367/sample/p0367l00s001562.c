#include<stdio.h>
int main(void)
{
	int a,b,c,z,i;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	z=0;
	
	for(i=a ;i<=b ;i++) {	
		
		if(c%i ==0) {
			z=z+1;
		}
	}
	printf("%d\n",z);
	return 0;
}
