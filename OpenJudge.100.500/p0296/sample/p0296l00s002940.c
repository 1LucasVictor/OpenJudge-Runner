#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
#define NUM '0'
void push(double);
int getop(char []);
double pop(void);
int main(){
  int type;
  double op2;
  char s[MAX];

  while((type = getop(s)) != EOF) {
    switch (type) {
    case NUM:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '/':
      op2 = pop();
      if (op2 != 0.0)
	push(pop() / op2);
      else
	printf("error: zero divisor\n");
      break;
    case '\n':
      printf("%.8g\n", pop());
      break;
    default:
      printf("error: unknown command %s\n", s);
      break;
    }
  }
  return 0;
}
#define MAXVALUE 100
int sp = 0;
double val[MAXVALUE];
void push(double f){
  if (sp < MAXVALUE)
    val[sp++] = f;
  else
    printf("error: stack full, can't push %g\n", f);
}
double pop(void){
  if (sp > 0)
    return val[--sp];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}
#include <ctype.h>
int getch(void);
void ungetch(int);
int getop(char s[]){
  int i, c;

  while ((s[0]= c = getch()) == ' ' || c == '\t')
    ;
  s[1] = '\0';
  if (!isdigit(c) && c != '.')
    return c;
  i = 0;
  if (isdigit(c))
    while (isdigit(s[++i] = c = getch()));
  if (c == '.')
    while (isdigit(s[++i] = c = getch()));
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUM;
}
#define BUF 100
char buf[BUF];
int bufp =0;
int getch(void) 
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
  if (bufp >= BUF)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}

