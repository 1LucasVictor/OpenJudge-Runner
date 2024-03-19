#include <stdio.h>
int main(void){
  int a,b;
  char c[3];
  scanf("%s",c);
  if(c[0]==c[1]&&c[1]==c[2]){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
}
