#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getop(char []);
void push(double);
double pop(void);

int main()
{
  char s[100];
  int t;
  double op;

  while((t = getop(s)) != EOF && t < 100) {
    switch (t) {
    case '0':
      push(atof(s));
      break;

    case '+':
      push(pop() + pop());
      break;

    case '*':
      push(pop() * pop());
      break;

    case '-':
      op = pop();
      push(pop() - op);
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

double V[100];
int sp = 0;

void push(double f)
{
  if (sp < 100)
    V[sp++] = f;
  else
    printf("error: stack full %g\n", f);
}

double pop(void)
{
  if (sp > 0)
    return V[--sp];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

#include <ctype.h>

int getch(void);
void ungetch(int);

int getop(char s[])
{
  int i;
  int a;

  while ((s[0]= a = getch()) == ' ' || a == '\t')

  s[1] = '\0';
  if (!isdigit(a) && a != '.')
    return a;

  i = 0;
  if (isdigit(a))
    while (isdigit(s[++i] = a = getch()))

  if (a == '.')
    while (isdigit(s[++i] = a = getch()))

  s[i] = '\0';
  if (a != EOF)
    ungetch(a);

  return '0';
}

char buf[100];
int bp = 0;

int getch(void)
{
  return (bp > 0) ? buf[--bp] : getchar();
}

void ungetch(int a)
{
  if (bp >= 100)
    printf("ungetch: too many characters\n");
  else
    buf[bp++] = a;
}
