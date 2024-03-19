#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 200
int stack[SIZE+10];
int s;

int main()
{
  char s[SIZE+10];
  scanf("%[^\n]*s",s);
  printf("%d\n",cal(s));
}

int pop()
{
  if(s<=0) return 0;
  return stack[--s];
}

int push(int a)
{
  stack[s++]=a;
}

int judge(char *s){
  if(*s == '+' || *s == '-'){
    s=s+1;
    if(*s >= '0' && *s <= '9'){
      return 1;
    }
    return 0;
  }

  if(*s >= '0' && *s <= '9'){
    return 1;
  }
  return 0;
}

int getnum(char *s){
  int check=0,n=0;

  if(*s == '+'){
    s++;
  }
  else if(*s == '-'){
    check=1;
    s++;
  }

  while(*s >= '0' && *s <= '9'){
    n = n*10+(*s - '0');
    s++;
  }

  if(check == 1) return -n;
  return n;
}

int cal(char *s){
  int a,b,num;

  while(*s!=NULL){
    if(judge(s)==1){
      num = getnum(s);
      push(num);
      while(*s == '+' || *s == '-'){
	s++;
      }
      while(num){
	num=num/10;
	s++;
      }
    }
    else{
      switch(*s){
      case '+':
	a = pop();
	b = pop();
	push(b+a);
	break;
      case'-':
	a = pop();
	b = pop();
	push(b-a);
	break;
      case'*':
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
	 


  


