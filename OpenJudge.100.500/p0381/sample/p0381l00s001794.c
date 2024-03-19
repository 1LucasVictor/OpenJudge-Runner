#include <stdio.h>

int x,n;
int i,j,k;
int sum;
main(){
    scanf("%d%d",&n,&x);

    for(i=1; i<=n;i++){
    	if(n==0 && x ==0){break;}
        for(j=1; j<=n;j++){
              for(k=1; k<=n; k++){
           		    if(i==j && i==k);
           		    else{
           		    	if(i+j+k == x){
                    		sum++;
           		    	}
                    	}
                    }
              }
        }
    
    printf("%d\n",sum/9);
    return 0;
}