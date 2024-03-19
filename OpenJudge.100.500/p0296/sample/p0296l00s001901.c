#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
  int x[100],top=0,i;
  char s[100];
  while(scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      top--;
      x[top]=x[top]+x[top+1];
    }
    else if ( s[0] == '-' ){
      top--;
      x[top]=x[top]-x[top+1];
    }
    else if ( s[0] == '*' ){
      for(i=2;i<top+1;i++){
	x[1]*=x[i];
      }
    } 
    else {
      top++; 
      x[top] = atoi(s);
    } 
  }
  printf("%d\n",x[1]);
  return 0;
}