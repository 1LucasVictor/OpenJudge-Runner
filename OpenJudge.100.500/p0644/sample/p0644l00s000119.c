#include <stdio.h> 
int main(){
  
  char s[4];
  int i,a=0;
 
  for (i=0; i<3; i++){
    scanf("%c",&s[i]);
    if (s[i] == '1')
      a++;
  }
  printf("%d\n", a);
  return 0;
}