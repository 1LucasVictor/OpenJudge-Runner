#include <stdio.h>
int main(){

	int A;
	int sn;
	int i;
	int max;
	int sum;
	int strt,len,k;
	
	sn=9999;
	
	scanf("%d",&sn);
	while(sn){
		max=-100001;
		sum=0;
		for(i=0;i<sn;i++){
			scanf("%d",&A);
			if(sum<0)sum=0;
			sum+=A;
			if(sum>=max)max=sum;
		}
		printf("%d\n",max);	
	scanf("%d",&sn);
	}
	return 0;
}