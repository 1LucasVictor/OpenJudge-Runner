#include<stdio.h>
int main(void)
{
	int i,j,x;
	int max=0;
	int min=0;
	long sum=0L;
	
	scanf("%d",&j);
	
	for(i=0;i<j;i++){
		scanf("%d",&x);
		sum+=(long)x;
		if(i==0){
			max=x;
			min=x;
		}
		if(x>max){
			max=x;
		}else if(x<min){
			min=x;
		}
		x=0;
	}
	printf("%d %d %ld\n",min,max,sum);
	
	return 0;
}