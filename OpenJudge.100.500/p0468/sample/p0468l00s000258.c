#include <stdio.h>
 
int main(void){
  	char c[3];
  	int i;
  	
    for(i=0;i<3;i++){
    	scanf("%c",&c[i]);
    }
	if(c[1] == 'R'){
    	printf("ABC\n");
    }else{
    	printf("ARC\n");
    }
}