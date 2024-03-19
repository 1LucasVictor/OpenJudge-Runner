#include<stdio.h>


int main(void)
{
	int i;
	int b=100000;
	int a;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		b*=1.05;
		if(b%1000!=0){
		b=b/1000;
		b=b+1;
		b=b*1000;
		}
	}
	printf("%d\n",b);
	
	
	return 0;
}