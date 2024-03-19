#include <stdio.h>
#define NUMBER 3

int main(){
  
	char S[NUMBER];
  
  	scanf("%s",S);
  
  	if(S[0] == S[1] && S[1] == S[2] && S[0] == S[2]){
      	printf("No");
    }else{
      	printf("Yes");
    }

  	return 0;
}
    	
