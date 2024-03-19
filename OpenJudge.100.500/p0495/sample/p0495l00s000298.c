#include <stdio.h>
#define NUMBER 3

int main(){
  
	char S[NUMBER];
  
  	for(int i=0; i<NUMBER; i++){
  		scanf("%s",S);
    }
  
  	if(S[0] == S[1] || S[1] == S[2]){
      	printf("No");
    }else{
      	printf("Yes");
    }

  	return 0;
}
    	