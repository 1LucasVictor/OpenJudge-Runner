#include <stdio.h>

int main(void)
{
	int h,w;
	int i,j;
	do{
		
		scanf("%d%d",&h,&w);
		if(h==0&&w==0){
			break;
			
			
		}
		for(i=0;i<h;i++){
			
			printf("#");
			for(j=0;j<w-2;j++){
	
				if(i==0||i+1==h){
					
					printf("#");
					
					
					
				}else{
					
					printf(".");
				}
				
				
				
				
			}
			
			
			
			printf("#\n");
			
			
			
			
			
		}
		
		
		
		
		
		
		
	}while(1);
	return 0;
}