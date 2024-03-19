#include<stdio.h>
int main(void)
{
	int H=1,W=1,i,j;
	
	do{
	
	scanf("%d %d",&H,&W);
	
	for(i=1;i<=H;i++){
		
		if(i==1||i==H){
			
			for(j=1;j<=W;j++){
				
				printf("#");
				
			}
			
			printf("\n");
			
		}
		
		if(i>1&&i<H){
			
			for(j=1;j<=W;j++){
				
				if(j==1||j==W){
					
					printf("#");
					
				}
				
				if(j>1&&j<W){
					
					printf(".");
					
				}
				
			}
			
			printf("\n");
			
		}
		
	}
		printf("\n");
	}while(H!=0||W!=0);
	
	return 0;
	
}