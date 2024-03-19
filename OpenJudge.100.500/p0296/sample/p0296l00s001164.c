#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 99
int getop(char []);
int getch(void);
void push(int);
int pop(void);
int main()
{
  int type,op2;
	char s[MAXOP];

	while(1) {
	  type = getop(s);
		switch (type) {
		case NUMBER:
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
		case '\n':
			printf("%d\n", pop());
			exit(1);
			break;
		}
	}
	return 0;
}

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(int f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
}

int pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		return 0;
	}
}


char buf[BUFSIZE];
int bufp =0;
int getop(char s[])
{
	int i, c;

	while ((s[0]= c = getch()) == ' ' || c == '\t');
	s[1] = '\0';
	if (!isdigit(c))
		return c;
	i = 0;
	if (isdigit(c))
	  while (isdigit(s[++i] = c = getch()));
	s[i] = '\0';
	if (c != EOF)
	     buf[bufp++] = c;   
	return NUMBER;
}

int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}


