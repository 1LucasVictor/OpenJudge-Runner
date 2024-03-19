#include <stdio.h>

#define TRUE 1
#define FALSE 0

int judgeSeven_100(int input){
	int hundredsPlace = input / 100;
  	int isSeven = FALSE;
  
  if(hundredsPlace == 7){
  	isSeven = TRUE;
  }
  	
  return isSeven;
}

int judgeSeven_10(int input){
	int tensPlace = (input % 100) / 10;
	int isSeven = FALSE;
  
  if(tensPlace == 7){
    isSeven = TRUE;
  }
  
	return isSeven;
}

int judgeSeven_1(int input){
	int onesPlace = (input % 10);
  int isSeven = FALSE;
  
  if(onesPlace == 7){
  	isSeven = TRUE;
  }

  return isSeven;
}

int main(){
  int input;
  int inputResult = 0;
  
	inputResult = scanf("%d", &input);
  
  if(judgeSeven_100(input) == TRUE){
       printf("Yes");
  }
  else if(judgeSeven_10(input) == TRUE){
       printf("Yes");
  }
  else if(judgeSeven_1(input) == TRUE){
       printf("Yes");
  }
  else{
  	printf("No");
  }
  
  return 0;
}  
