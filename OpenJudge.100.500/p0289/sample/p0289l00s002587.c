#include<stdio.h>

int main()
{
	int a,b;
	int r;
	int swp;
	

	scanf("%d %d",&a,&b);

	if(a<b){
		swp = a;
		a = b;
		b = a;
	}

	while( (r=a%b) != 0){
		a=b;
		b=r;
	}
	printf("%d\n",b);
	return 0;
}

