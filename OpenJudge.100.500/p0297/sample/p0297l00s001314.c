#include <stdio.h>

typedef struct{
	char name[10];
	int t;
}Process;

int main(){
	int n,q;
	Process Q[100000];
	int EndProcess = 0;
	int EndTime = 0;

	int i,j,k;
	
	//Input Process
	scanf("%d %d",&n,&q);
	
	for(i = 0;i < n;i++){
		scanf("%s%d",&Q[i].name,&Q[i].t);
	}
	
	//Do Process
	while(EndProcess < n){
		
		for(i = 0;i < n-EndProcess;i++){
			if(Q[i].t - q <= 0){
				EndTime += Q[i].t;
				printf("%s %d\n",Q[i].name,EndTime);
					
				for(k = i;k < n-EndProcess-1;k++){
					Q[k] = Q[k+1];
				}
					
				i--;
				EndProcess++;
			}else{
				Q[i].t -= q;
				EndTime += q;
			}
		}
	}
	
	return 0;
}