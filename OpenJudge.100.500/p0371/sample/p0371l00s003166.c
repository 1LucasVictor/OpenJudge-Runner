#include<stdio.h>

int max(long long int a[],int n){
	int i;
	long long int max=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}

int min(long long int a[],int n){
	int i;
	long long int min=a[0];
	for(i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}

int sum(long long int a[],int n){
	int i;
	long long int sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum;
}

int main(void){
	int n;
	long long int a[10000]={0};
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	printf("%lld %lld %lld\n",min(a,n),max(a,n),sum(a,n));
	return 0;
}