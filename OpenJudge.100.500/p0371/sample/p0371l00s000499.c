#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int data[n],max,min,ave;
	long sum = 0;
	for(i = 0;i < n;i++){
		scanf("%d",&data[i]);
	}
	max = data[0];
	min = data[0];
	for(i = 0;i < n;i++){
		if(data[i]>max){
			max=data[i];
		}
		if (data[i]<min)
		{
			min = data[i];
		}
		sum = sum + data[i];
	}
	printf("%d %d %ld\n",min,max,sum);
	return 0;
}