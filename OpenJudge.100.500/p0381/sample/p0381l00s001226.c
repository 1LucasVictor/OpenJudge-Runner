#include<stdio.h>
int main(){
	
	int n =0, x=0;
	int i=0, j= 0, k= 0; 
	int count= 0; 
	
	while(1){
		scanf("%d %d",&n,&x);
		
		if(n ==0 && x ==0){
		break;
		}
	
			for(i= 1; i<= n;i++){
				for(j = 1; j<= n;j++){
					for(k= 1; k<= n; k++){
						if(i+j+k==9){
							count+=1;
							
						}
						}
					}
				}
		printf("%d\n",count/x);
			}

	
	
	
	
return 0;
}