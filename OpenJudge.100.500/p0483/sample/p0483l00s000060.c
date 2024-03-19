#include <stdio.h>
int main(void){
  int a;
  char buf[100];
  
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d\n", &a);
  
  if (a%10==7 || a/100==7 || (a/10)%10==7){
    printf("Yes");
  }else{
    printf("No");
  }
  
  return 0;
}