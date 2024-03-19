#include<stdio.h>
#include<ctype.h>
main(){
  int i;
  char string[1201];

//  scanf("%s",string);
  i=0;
  scanf("%c",&string[i]);
  while(string[i]!='\n'){
    if(isupper(string[i])!=0){
      printf("%c",tolower(string[i]));
    }
    else if(islower(string[i])!=0){
      printf("%c",toupper(string[i]));
    }
    else  printf("%c",string[i]);
    i++;
    scanf("%c",&string[i]);
  }
  printf("\n");

  return 0;
}