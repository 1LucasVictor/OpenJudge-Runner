#include <stdio.h>

int main(void){
	char txt[100];
	int flg=0;
	scanf("%s",txt);
    for(int i=0;i<3;i++){
    	if(txt[i]==txt[i+1]){
        	flg=1;
        	break;
        }
    }
    if(flg==0){
    	printf("Good");
    }
    else if(flg==1){
    	printf("Bad");
    }
    
}