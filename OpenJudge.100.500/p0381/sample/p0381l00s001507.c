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
		
		for(i= 1;i< n-1;i++){
			for(j= i+1;j< n;j++){
				k= x-i-j;
					if(j<k && k<=n){
						count++;
					}
			}
		}
		
		printf("%d\n",count);
	}

return 0;
}