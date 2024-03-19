#include <stdio.h>

int main(void)
{
	int a,b,r1,r2,r3,max;
	
	scanf("%d %d",&a,&b);
	
	r1=a+b;
	r2=a-b;
	r3=a*b;
	
	if(r1>=r2&&r1>=r3){
		max=r1;
	}else if(r2>=r3){
		max=r2;
	}else{
		max=r3;
	}
	
	printf("%d\n",max);
	
	return 0;
}
	