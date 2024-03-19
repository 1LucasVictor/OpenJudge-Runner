#include <stdio.h>
 
int main(){
  int i, j;
  char s[128];
  int k = 0;
  
  scanf("%s", s);
  j = atoi(s);
  
  for(i = 0; i < 3; i++){
    if(j % 10 == 1)
      k++;
    j /= 10;
  }
   
  printf("%d\n", k);
  return 0;
}