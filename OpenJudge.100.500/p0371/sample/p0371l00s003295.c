#include<stdio.h>

int main(){
	int n,i;
	int x;
	long long min=1000001,max=-1000001;
	long long sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(min > x){
			min=x;
		}
		if(max < x){
			max = x;
		}
		sum += x;
	}
	printf("%ld %ld %ld\n",min,max,sum);
	return 0;
}