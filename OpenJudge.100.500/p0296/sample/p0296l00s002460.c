#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int count, x, y, total=0;
  char str[100];
  
  count = 1;
  while(scanf("%s",str) != EOF) {
    if ( str[0] == '+' ){
      total += x + y;
    } else if ( str[0] == '-' ){
      total += x - y;
    } else if ( str[0] == '*' ){
      total += x * y;
    } else {
      if(count == 1) {
	x = atoi(str);
	count--;
      } else {
	y = atoi(str);
	count++; 
      }
    }
  }
  printf("%d\n",total);
  
  return 0;
}