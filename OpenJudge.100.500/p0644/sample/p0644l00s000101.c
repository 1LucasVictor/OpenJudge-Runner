#include <stdio.h>
int main(){
  int i = 0;
  char c;
  while((c = getchar()) != EOF) {
	if(c== '1') i++;
  }
  printf("%d\n", i);
  return 0;
}