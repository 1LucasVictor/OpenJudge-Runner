#include <stdio.h>
#include <stdlib.h>

int  main(void)
{
	
	int num[100],k,ans[100];
	int count=0;
	
	for(int i=0;i<5;i++){
		
		scanf("%d",&(num[i]));
		
	}
	
	scanf("%d",&k);
	
	for(int i=0;i<5;i++){
		
		for(int j=1;j<5;j++){
			
			ans[i]=abs(num[i]-num[j]);
			
		}
		
		if(ans[i]>k){
			
			count++;
			
		}
		
	}
	
	if(count!=0){
		
		printf(":(\n");
			
		}else{
			
			printf("Yay!\n");
			
		}
		
		return 0;
	}