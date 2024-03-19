#include <stdio.h>

int main(){
  char s[4];
  int b[100]={};
  for(int i=0;i<4;i++){
    scanf("%c",&s[i]);
  }
  
  int cast;
  for(int i=0;i<4;i++){
    cast = s[i];
    b[cast] += 1;
  }
  int count = 0;
  for(int i=65;i<91;i++){
    if(b[i] == 2){
      count += 1;
    }
  }
  if(count == 2){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}