#include <stdio.h>

int main(){
	int n;
	int sum=100000;
	int i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum*=1.05;
		if(sum%1000!=0){
			sum+=1000;
			sum/=1000;
			sum*=1000;
		}
	}
	
	printf("%d\n",sum);
	
	return 0;
}