#include <stdio.h>

int main() {
  char s[100000];
  scanf("%s", &s);
  int tmp;
  int i;
  int iti = 0;
  int zero = 0;
  //if(large<b){large = b;}
  for(i=0;s[i]!='\0';i++){
    if(s[i] == '0') zero++;
    if(s[i] == '1') iti++;
  }
  int smaller = zero;
  if(smaller > iti) smaller = iti;
  printf("%d", smaller*2);
  return 0;
}
