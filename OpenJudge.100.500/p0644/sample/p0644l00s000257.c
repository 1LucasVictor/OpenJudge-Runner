#include<stdio.h>
 
int main(){
  char s[3];
  int counter = 0;
  
  scanf("%s",s);
  
  if(s[0] == '1') ++counter;
  if(s[1] == '1') ++counter;
  if(s[2] == '1') ++counter;
  
  printf("%d",counter);
  
  return 0;
}