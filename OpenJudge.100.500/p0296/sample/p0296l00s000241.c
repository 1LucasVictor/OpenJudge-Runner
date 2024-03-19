/* Elementary data structures - Stack */

#include <stdio.h>
#include <stdlib.h>

int stack[200];
int l = 0;

void push( int x )
{
  stack[l++] = x;
}

int pop()
{
  return stack[--l];
}

int main( void )
{
  char c;
  int a, b, numberp;
  while ( 1 ) {
    scanf( "%c", &c );
    if ( c == '\n' ) break;

    switch( c ){
    case ' ':
      numberp = 0;
      break;
    case '+':
      push( pop() + pop() );
      numberp = 0;
      break;
    case '-':
      a = pop();
      b = pop();
      push( b - a );
      numberp = 0;
      break;
    case '*':
      push( pop() * pop() );
      numberp = 0;
      break;
    default:
      if ( numberp )
        push( 10 * pop() + c - 48 );
      else
        push( c - 48 );
      numberp = 1;
    }
  }

  printf( "%d\n", pop() );

  return 0;
}