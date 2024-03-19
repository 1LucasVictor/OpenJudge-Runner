#include <stdio.h>
#include <string.h>

int main(void){

  char s[5];
  scanf("%s", s);
  int count = 0;

  for(int i= 0; i<3;i++){
 	if(s[i]==s[i+1]){
      printf("Bad\n");
      return 0;
    }
  }

  printf("Good\n");
  
  return 0;
}

  