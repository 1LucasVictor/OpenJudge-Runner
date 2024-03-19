#include <stdio.h>

int main(){
  char S[4];
  char temp;
  int flag=0;
  scanf("%s",S);
  temp=S[0];
  for(int i=1;i<=3;i++){
  	if(temp==S[i])
      flag=1;
    temp=S[i];
  }
  if(flag)printf("Bad\n");
   else printf("Good\n");
    
  
  return 0;
}