#include <stdio.h>
int main(){
  int i,diff;
  char str[1200];
  for(i=0;i<1200;i++){
    scanf("%c",&str[i]);
    if(str[i]=='\n')break;
  }

  diff='a'-'A';

  for(i=0;i<1200;i++){
    
    if(str[i]>=65 && str[i]<=90)str[i]+=diff;
    else if(str[i]>=97 && str[i]<=122)str[i]-=diff;
    else if(str[i]=='\n')break;
  }

  for(i=0;i<1200;i++){
    printf("%c",str[i]);
    if(str[i]=='\n')break;
  }
   
  

  return 0;

}