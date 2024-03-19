#include<stdio.h>

int main(){
  char a[3];
  for(int i=0;i<4;i++){
  scanf("%c",&a[i]);
  }
  if (a[0]==a[1]&&a[2]==a[3]&&a[0]!=a[2]){
    printf("Yes");
  }
  else if(a[0]==a[2]&&a[1]==a[3]&&a[0]!=a[1]){
    printf("Yes");
  }
  else if(a[0]==a[3]&&a[2]==a[1]&&a[0]!=a[2]){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}