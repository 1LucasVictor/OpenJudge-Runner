#include<stdio.h>

int main(){
	int i,j;
	int n;
	int debt=100000;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		debt+=debt*0.05;
		if(debt%1000!=0){
			debt/=1000;
			debt*=1000;
			debt+=1000;
		}
	}
	printf("%d\n",debt);
	
	return 0;
}