#include <stdio.h>
int main(){
  char eki[3];
  for(int i=0;i<3;i++){
    scanf("%c",&eki[i]);
  }
  if(eki[0]==eki[1]){
      if(eki[1]==eki[2]){
        printf("No");
      }else{
        printf("Yes");
      }
  }else{
  printf("Yes");
  }
  return 0;
}