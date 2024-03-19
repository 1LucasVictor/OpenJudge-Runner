#include <stdio.h>
#include <stdbool.h>
 
int main(void){
	int in[6] = {};
  	int i;
  	bool flag = true;
  	
  	for(i=0;i<6;i++){
    	scanf("%d\n",&in[i]);
    }
  	for(i=0;i<4;i++){
    	if(in[i+1] - in[i] > in[5]){
        	flag = false;
        }
    }
  	if(flag) printf("Yay!\n");
  	if(!flag) printf(":(\n");
}