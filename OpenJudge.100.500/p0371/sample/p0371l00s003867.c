#include<stdio.h>
int main(void){
	int a[5],i,n,max,min,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}else{
			max=a[i];
		}
	}
	for(i=0;i<n;i++){
		sum=a[i]+sum;
	}
	printf("%d %d %d\n",min,max,sum);
	
	return 0;
}