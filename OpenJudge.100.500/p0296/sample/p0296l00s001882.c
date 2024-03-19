#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000
void push(int x);
int pop(void);
int isEmpty(void);
int isFull(void);
int keisan(char *s);
int is_digit(char *s){
  if (*s == '+' || *s =='-') {
		s++;
		if (*s >= '0' && *s <= '9') return 1;
		return 0;
	}
  if (*s >= '0' && *s <= '9') return 1;
	return 0;
}
int get_number(char *s)
{
	int sign = 0, n = 0;
	if (*s == '+') {
		s++;
	} else if (*s == '-') {
		sign = 1;
		s++;
	}
	while (*s >= '0' && *s <= '9') {
		n = n * 10 + (*s - '0');
		s++;
	}
	if (sign==1) return -n;
	return n;
}
int top=0;
int S[1000];
int main(){
  int i,x=0,y=0;
  char s[1000];
  scanf("%[^\n]*s", s);
    
  printf("%d\n",keisan(s));

  return 0;
}
int isEmpty(void ){
  if( top== 0)return 0;
  return 1;
}
int isFull(void ){
  if( top >= MAX - 1)return 0;
  return 1;
}
void push(int x){
  if(isFull == 0)printf("error\n");
  
  S[top++] = x;
  
}
int pop(void ){
  
  if(isEmpty == 0)printf("error\n");
  return S[--top];
}
int keisan(char *s){
  int x,y,n;
   while (*s) {
if (is_digit(s)) {
			n = get_number(s);
			push(n);
			while (*s == '-' || *s == '+') {
				s++;
			}
			while (n) {
				n /= 10;
				s++;
			}
			} else {
			switch (*s) {
			case '+':
				x = pop();
				y = pop();
				push(x+y);
				break;
			case '-':
				x = pop();
				y = pop();
				push(y-x);
				break;
			case '*':
				x = pop();
				y = pop();
				push(y*x);
				break;
			case '/':
				x = pop();
				y = pop();
				if (x == 0) break;
				push(y/x);
				break;
			case '%':
				x = pop();
				y = pop();
				if (x == 0) break;
				push(y%x);
			}
			s++;
		}
   }
   return pop();
}