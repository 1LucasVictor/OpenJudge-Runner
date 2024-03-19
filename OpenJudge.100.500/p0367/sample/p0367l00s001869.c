#include<stdio.h>
int main(void)
{
	int a,b,c,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(;a<=b;a++){
		if(0==c%a){
			sum++;
		}
	}
	printf("%d\n",sum);
	return 0 ;
}