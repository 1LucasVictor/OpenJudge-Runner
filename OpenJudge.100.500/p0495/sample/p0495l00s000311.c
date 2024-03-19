#include <stdio.h>
#include <string.h>

int main(void){
  char s[4];
  int a,b;
  
  
  scanf("%s", s);
  /*
  for(int i=0; i<5; i++){
  if(strcmp(s[i],"A")==0){
    a++;
  }
   else if(strcmp(s[i],"B")==0){
     b++;
   }
  }
  */
  if(s[0]==s[1] && s[1]==s[2]){
    printf("No");
  }
  else{
    printf("Yes");
  }

  return 0;

}





  
  
    