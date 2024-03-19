#include <stdio.h>
int main(){
  char a[3];
  for(int i=0; i<4; i++){
    scanf("%s",&a[i]);
  }
  if(a[0]==a[1] || a[1]==a[2] || a[2]==a[3]){
    printf("Bad");
  }else{
    printf("Good");
  }
  return 0;
}