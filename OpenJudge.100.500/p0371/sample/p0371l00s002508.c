#include <stdio.h>

int main(void){
	int i,n,min,max,num;
	long long int sum=0;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&num);
		if(i==0){
			min=num;
			max=num;
		}
		sum+=num;
		if(num<min)
			min=num;
		if(num>max)
			max=num;
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}