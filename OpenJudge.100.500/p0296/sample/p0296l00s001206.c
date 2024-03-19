#include<stdio.h>
#include<stdlib.h>
  
int main(void)
{
  int i=0;
  int stack[100];
  char s[100];
   
  while(scanf("%s", s) != EOF){
    if(s[0] == '+'){
      stack[i-2] += stack[i-1];
      i--;
    }
    else if(s[0] == '-'){
      stack[i-2] -= stack[i-1];
      i--;
    }
    else if(s[0] == '*'){
      stack[i-2] *= stack[i-1];
      i--;
    }
    else{
      stack[i++] = atoi(s);
    }
  }
 
  printf("%d\n", stack[0]);
  return 0;
}