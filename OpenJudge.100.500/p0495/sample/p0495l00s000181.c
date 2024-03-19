#include "stdio.h"

int main(void){
	char s[4];
  scanf("%s",s);
  int i;
  int a = 0;
  int b = 0;
  for (i = 0; s[i] != 0; i++) {
    if (s[i] == 'A') a++;
    if (s[i] == 'B') b++;
  }
  if(a > 0 && b > 0) 
  	printf("Yes\n");
  else
    printf("No\n");
}