#include <stdio.h> 

int main(void){
    int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	
	if(0<=a,b,c<=10000){
	    if(a<b){
	    	if(a<=c){
	    		if(b<=c){
	    		printf("%d %d %d\n",a,b,c);
	    		}if(c<b){
	    		printf("%d %d %d\n",a,c,b);
	    		}
	    	}
	    	if(c<a){
    			printf("%d %d %d\n",c,a,b);
	    	}
	    }
    	if(b<a){
    		if(b<=c){
	    		if(c<a){
	    		printf("%d %d %d\n",b,c,a);
	    		}if(a<=c){
	    		printf("%d %d %d\n",b,a,c);
	    		}
	    	}
	    	if(c<b){
    			printf("%d %d %d\n",c,b,a);
	    	}
	}
	}
    return 0;
}
