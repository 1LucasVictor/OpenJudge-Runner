#include<stdio.h>

int main(){
	int maisuu,num,i,j;
	char gara;
	int s[13]={0};
	int h[13]={0};
	int c[13]={0};
	int d[13]={0};
	
	//printf("?????°?????\?????????????????????:");
	scanf("%d",&maisuu);
	
	for(i=0;i<maisuu;i++){
		
		scanf("%s %d",&gara ,&num);
		
		switch(gara){
			
			case 'S': s[num-1]=num;
				break;
			
			case 'H': h[num-1]=num;
				break;
			
			case 'C': c[num-1]=num;
				break;
			
			case 'D': d[num-1]=num;
				break;
			
		}
		
	}
	
	//printf("\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			
			switch(i){
				
			case 0: 
				if(s[j]==0){
					printf("S %d\n",j+1);
				}
				break;
			
			case 1:
				if(h[j]==0){
					printf("H %d\n",j+1);
				}
				break;
			
			case 2: 
				if(c[j]==0){
					printf("C %d\n",j+1);
				}
				break;
			
			case 3: 
				if(d[j]==0){
					printf("D %d\n",j+1);
				}
				break;
				
			}
			
		}
		
	}
	
	return 0;
}