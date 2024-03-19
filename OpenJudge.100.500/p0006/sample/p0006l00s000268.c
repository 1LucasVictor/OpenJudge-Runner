#include<stdio.h>
int main(){
	int i,n,sum=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=sum+(double)(sum*5)/100;
		if(sum%1000!=0){
			sum+=1000;
		}
		sum=sum/1000*1000;
	}
	printf("%d\n",sum);
	return 0;
}