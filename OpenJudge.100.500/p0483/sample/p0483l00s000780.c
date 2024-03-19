#include <stdio.h>

int main(){
  int i;
  char c;
  for(i=0;i<3;i++){
    scanf("%c",&c);
    if(c=='7') break;
  }
  if(i!=3){
    printf("Yes");
  }else{
    printf("No");
  }
  return(0);
}