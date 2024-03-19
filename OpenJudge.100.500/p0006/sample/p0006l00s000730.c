#include<stdio.h>

int main(void){
	int n;
	int i;
	int sum = 100000;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		sum = sum * 1.05;
                if(sum%1000>0){
                   sum = sum - (sum%1000) + 1000;
                }
	}
	printf("%d\n",sum);
	return 0;
}