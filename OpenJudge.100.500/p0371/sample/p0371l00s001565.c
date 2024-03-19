#include<stdio.h>
int main(void)
{
	int x,min,max,sum,a,i ;
	scanf("%d",&x);
	scanf("%d",&a);
	max=a;
	min=a;
	sum=a;
	for(i=1;i<x;i++){
		scanf("%d",&a);
		sum+=a;
		if(a<min){
			min=a;
		}
		if(a>max){
			max=a;
		}
	}
	printf("%d %d %d\n",min,max,sum);
	return 0 ;
}