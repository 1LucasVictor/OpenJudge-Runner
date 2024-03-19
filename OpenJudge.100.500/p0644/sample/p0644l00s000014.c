#include <stdio.h>

int main(void){
  int a;
  scanf("%d",&a);
  
  char s[4] = {'\0'};
  
  sprintf(s, "%d", a);
  
  int i;
  int c = 0;
  
  for (i = 0; i < 3; i++){
    if(s[i]=='1')
      c++;
  }
  
  printf("%d",c);
  
  return 0;
}
