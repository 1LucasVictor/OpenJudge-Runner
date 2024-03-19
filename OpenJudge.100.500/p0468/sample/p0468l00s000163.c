#include <stdio.h>
#include <string.h>


int main(void){
  	char S[4];
	//char T1 = "ABC";
  	//char T2 = "ARC";

  	scanf("%s", &S);
  
  if(S[1] == 'B'){
    //printf("%s\n",T2);
    printf("ARC\n");

  }
  else if(S[1] == 'R'){
    printf("ABC\n");
  }
  return 0;
}
