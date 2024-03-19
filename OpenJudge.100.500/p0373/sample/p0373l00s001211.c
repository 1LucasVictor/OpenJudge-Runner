#include <stdio.h>

int main(void) {
        int H, W;
	while(1){
	    scanf("%d %d", &H, &W);
	    if(H==0 && W==0){
	    	break;
	    }
	    for(int i=0; i<W; i++){
	    	printf("#");
	    }
	    printf("\n");
	    for(int i=0; i<H-2; i++){
	    	for(int j=0; j<W; j++){
	    		if(j==0 || j==W-1){
	    			printf("#");
	    		}else{
	    			printf(".");
	    		}
	    	}
	    	printf("\n");
	    }
	    for(int i=0; i<W; i++){
	    	printf("#");
	    }
	    printf("\n\n");
	}
	return 0;
}

