#include <stdio.h>
#include <string.h>

int main(){
  	char AtCoder[4];
  
  	scanf("%s", AtCoder);
  
  	if(strcmp(AtCoder, "ARC") == 0){
      printf("ABC\n");
    }else{
    	printf("ARC\n");
    }

	return 0;
}