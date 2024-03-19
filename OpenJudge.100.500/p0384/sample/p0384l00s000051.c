#include <stdio.h>
#include <ctype.h>
 
int main(void){

  char mr[1200];
  int i;

  for(i = 0; i < 1200; i++){
    scanf("%c", &mr[i]);
    if(mr[i] >= 65 && mr[i] <= 90){
      mr[i] = tolower(mr[i]);
    } else if(mr[i] >= 97 && mr[i] <= 122){
	mr[i] = toupper(mr[i]);
      }
    if( mr[i] == '\n'){
      mr[i] = '\0';
      break;
    }
  }
  printf("%s\n", mr);
  return 0;
}