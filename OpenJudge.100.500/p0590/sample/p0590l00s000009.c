#include <stdio.h>

int main(void)
{
	int a[5],i,j,count = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%d\n",&a[i]);
	}
	
	int k;
	
	scanf("%d\n",&k);
	
	for(i = 0; i < 5; i++){
		for(j = 4; j > i; j--){
			int flag = a[j] - a[i];
			
			if(flag <= k){
				count = count + 1;
				
			}else{
				break;
			}
		}
	}
	
	if(count == 10){
		printf("Yay!\n");
	}else{
		printf(":(\n");
	}
	
	return 0;
}
	
	
	
	
				
	
	
	
	
	
	