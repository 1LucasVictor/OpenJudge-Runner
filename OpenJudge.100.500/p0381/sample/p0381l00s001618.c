#include <stdio.h>
int main(){
    
	int n,x;
    
	int i,j,k,m=0;
    
	int d[100][100][100];
    
    
    
	while(1){
        
		scanf("%d %d",&n,&x);
        
		if(n==0 && x==0) break;
        
		for(i=0;i<n-2;i++){
            
			for(j=i+1;j<n-1;j++){
                    
				for(k=j+1;k<n;k++){
                        
					//printf("%d %d %d\n",i,j,k);
                        
					if((i+j+k+3)==x){
                            
						m++;
                        
					}        
                    
				}
            
			}
        
		}
        printf("%d\n",m);
        m=0;
	}  
    
	return 0;
    
}

