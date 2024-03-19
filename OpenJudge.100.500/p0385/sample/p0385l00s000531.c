#include <stdio.h>
int main (void){
	
	int a ,sum=0;
	while(1){
	while((a=getchar())!='\n'){
		sum+=a-0x30;}
		if(sum==0){break ;}
		else{printf("%d\n",sum);sum=0;}
	}
		
			
return 0;
	}