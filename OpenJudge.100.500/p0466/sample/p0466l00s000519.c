#include <stdio.h>
#include <string.h>

int main(){
  
  	char S[11];
  	char T[11];
  	int lengthS;
  	int lengthT;
  
  	scanf("%s", S);
  	scanf("%s", T);
  	
  	lengthS = strlen(S);
  	lengthT = strlen(T);
  
  	if(lengthT == (lengthS+1)){
    	if(strncmp(S, T, lengthS) == 0){
          	printf("Yes\n");
        }else{
         	printf("No\n");
        }
    }else{
    	//NG
      	printf("No\n");
    }

	return 0;
}