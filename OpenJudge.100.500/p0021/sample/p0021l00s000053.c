#include <stdio.h>
int main(){

	int A[5000];
	int sn;
	int i;
	int max;
	int sum;
	int strt,len,k;
	
	sn=9999;
	
	scanf("%d",&sn);
	while(sn){
		for(i=0;i<sn;i++){
			scanf("%d",&A[i]);
		}
		
		max=-100001;
		sum=0;
		
		for(len=1;len<=sn;len++){
			for(strt=0;strt<=sn-len;strt++){
				sum=0;
				for(k=strt;k<strt+len;k++)sum+=A[k];
				if(sum>=max)max=sum;
			}
		}
		printf("%d\n",max);	
	scanf("%d",&sn);
	}
	return 0;
}