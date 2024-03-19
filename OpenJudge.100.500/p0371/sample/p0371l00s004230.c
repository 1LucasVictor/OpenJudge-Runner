#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int array[10000];
	int i;
	int min=0,max=0;
	long sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	min=array[0];
	max=array[0];
	for(i=0;i<n;i++){
		if(array[i]<min){
			min=array[i];
		}else if(array[i]>max){
			max=array[i];
		}
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}