#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int top=0, s_array[1000];

void push( int num)
{
  top++;
  s_array[top] = num;
}

int pop( void)
{
  top--;
  return s_array[top+1];
}

int main()
{
  int i=0, j=1, number, num1, num2;
  char array[MAX], one_num[9];

  while(1){
    if( scanf("%s", &array) == EOF )break;

    if( array[0] == '+' || array[0] == '-' || array[0] == '*'){
      num1 = pop();
      num2 = pop();
      if( array[0] == '+')push(num2 + num1);
      else if( array[0] == '*')push(num2 * num1);
      else push(num2 - num1);
    }
    else push(atoi(array));
    
  }      
  
  printf("%d\n", pop()); 
  
  return 0;
}