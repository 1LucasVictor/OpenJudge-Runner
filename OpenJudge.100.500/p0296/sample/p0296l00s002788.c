#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int x,y;
  char s[100];
  int st[200],sp;
  sp = 0;
  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
		x = st[--sp];
		y = st[--sp];
		st[sp++] = x + y;
    } else if ( s[0] == '-' ){
		x = st[--sp];
		y = st[--sp];
		st[sp++] = x - y;
    } else if ( s[0] == '*' ){
		x = st[--sp];
		y = st[--sp];
		st[sp++] = x * y;
    } else {
      x = atoi(s);
	  st[sp++] = x;
    }
  }
  printf("%d\n", st[--sp]);

  return 0;
}