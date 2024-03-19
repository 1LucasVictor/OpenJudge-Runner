#include <stdio.h>

int stack[100];
int stack_size=0;


int calc_rpn(char *s)
{
  int a,b,n;
	
  while(*s){
		
    if(is_digit(s)){
      n=get_number(s);
      push(n);

      while(*s=='-'||*s=='+'){
	s++;
      }
      while(n){
	n/=10;
	s++;
      }
			
    } else {
      switch(*s)
	{
	case '+':
	  a = pop();
	  b = pop();
	  push(b+a);
	  break;

	case '-':
	  a = pop();
	  b = pop();
	  push(b-a);
	  break;

	case '*':
	  a = pop();
	  b = pop();
	  push(b*a);
	  break;
		
	}
      s++;
    }
  }
  return pop();
}






int pop()
{
  if (stack_size<=0) return 0;
  return stack[--stack_size];
}




int push(int a)
{
  stack[stack_size++]=a;
}




int is_digit(char *s)
{
  if (*s=='+'||*s=='-')
    {	s++;
      if (*s>='0'&&*s<='9')return 1;
      return 0;
    }
      if (*s>='0'&&*s<='9')return 1;
      return 0;
}





int get_number(char *s)
{
  int sign=0,n=0;

  if(*s=='+'){
    s++;
  }
  else if(*s=='-'){
    sign = 1;
    s++;
  }

  while(*s>='0'&&*s<='9'){
    n=n*10+(*s-'0');
    s++;
  }

  if(sign)return -n;
  return n;
}





int main()
{
  char s[100];

  scanf("%[^\n]*s", s);
  printf("%d\n",calc_rpn(s));

  return 0;
}