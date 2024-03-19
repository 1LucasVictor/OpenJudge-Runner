#include <stdio.h>
#include <string.h>

int main(){
  char a[200000];
  char b[200000];
  int counter = 0;

  scanf("%s %s", a, b);
  for(int i = 0; i < strlen(a); i++){
    if(a[i] != b[i])
      counter++;
  }
  printf("%d", counter);
  return 0;
}
