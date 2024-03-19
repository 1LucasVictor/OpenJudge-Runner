#include <stdio.h>

int main () {
  int N;
  scanf("%d",&N);
  char *str[] = {"hon","pon","bon"};
  
  switch(N%10){
    case 0:
    case 1:
    case 6:
    case 8:
      printf("%s",str[1]);
      break;
    case 3:
      printf("%s",str[2]);
      break;
    default:
      printf("%s",str[0]);
      break;
  }
  return 0;
}
