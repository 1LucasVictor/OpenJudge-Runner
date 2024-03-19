#include<stdio.h>
int main(){
  int i;
  char a[3];
  for(i=0; i<3; i++){
    scanf("%c",&a[i]);
  }
  if(a[1]=='R'){
    printf("ABC");
  }else if(a[1]=='B'){
    printf("ARC");
  }
return 0;
}