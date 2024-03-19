#include<stdio.h>

int main(void){
	
	int n,i;
	int a[10000];
	int MIN,MAX;
	long long int SUM;

	SUM=0;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		SUM=a[i]+SUM;
	}
	
	MAX=-2147483648;
	MIN=2147483647;
	
	for(i=0;i<n;i++){
		if(a[i]>MAX)MAX=a[i];
		if(a[i]<MIN)MIN=a[i];
	}
	
	printf("%d %d %d\n",MIN,MAX,SUM);

	return 0;	

}
	
	