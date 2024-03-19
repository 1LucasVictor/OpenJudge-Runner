#include <stdio.h>

int main(){
  int i,m=0;
  char c;
  for(i=0;i<3;i++){
  	scanf("%c",&c);
    if(c=='A') m++;
  }
  if((m==0)||(m==3)){
    printf("No");
  }else{
    printf("Yes");
  }
  return(0);
}
