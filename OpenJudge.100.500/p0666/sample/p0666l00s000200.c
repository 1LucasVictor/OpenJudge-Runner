    #include <stdio.h> 
    #include <stdlib.h>    
    	int main(void){
    	int X, A, B;
    	char d;
    	scanf("%d %d %d",&X, &A, &B);
    		if(1<= X, A, B || 10^9>= X, A, B){
    			if(A - B >= 0){
    				printf("delicious\n");
    				return 0;
      		}else if(B - A < X + 1){
      			printf("safe\n");
      			return 0;
      		}else{
      			printf("dangerous\n");
      			return 0;
      		}	
      	}else{
      		exit(1);
      	}
    	}