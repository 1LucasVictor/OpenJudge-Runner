#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  int i=0;
  int x[100];

  char s[100];

  while( scanf("%s", s) != EOF ){
    i++;
    if ( s[0] == '+' ){
      i=i-2;
      x[i]=x[i]+x[i+1];
    } else if ( s[0] == '-' ){
      i=i-2;
      x[i]=x[i]-x[i+1];

    } else if ( s[0] == '*' ){
      i=i-2;
      x[i]=x[i]*x[i+1];

    } else {
      x[i] = atoi(s);

    }
  }
  printf("%d\n",x[i]);

  return 0;
}