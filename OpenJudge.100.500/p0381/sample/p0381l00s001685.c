#include <stdio.h>

int x,n;
int i,j,k;
int sum;
main(){
    scanf("%d%d",&n,&x);

    for(i=0; i<n;i++){
    	if(n==0 && x ==0){break;}
        for(j=0; j<n;j++){
              for(k=0; k<n; k++){
           		    if(i+j+k == x){
                    		sum++;
                    	}
                    }
              }
        }
    
    printf("%d\n",sum/4);
    return 0;
}