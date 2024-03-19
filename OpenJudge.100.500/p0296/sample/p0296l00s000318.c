#include<stdio.h>
int pop();
void push(int);
int get_num(char *);
int is_digit(char *);
int calc(char *);

int data[100];
int size=0;

int main(){

  int n;
  char s[100000];

  scanf("%[^\n]*s",s);
  printf("%d\n",calc(s));
  return 0;
}

int pop(){
  if(size<=0) return 0;
  return data[--size];
}
void push(int n){
  data[size++]=n;
}

int get_num(char *s){

  int n=0,sign=0;

  if(*s=='+'){
    s++;
  }
  else if(*s=='-'){
    sign=1;
    s++;
  }
		  
  while('0'<=*s && *s<='9'){
    n=n*10+(*s-'0');
    s++;
  }
  if(sign==1) return -n;
  return n;
}

int is_digit(char *s){

  if('0'<=*s && *s<='9') return 1;
  return 0;
}
int calc(char *s){
  
  int a,b,n;

  while(*s){
    //数値のとき
    if(is_digit(s)==1){
      n=get_num(s);
      push(n);
      while(n){
	n/=10;
	s++;
      }
    }
    //数値以外のとき
    else{
      switch(*s){
      case '+':
	a=pop();
	b=pop();
	push(b+a);
	break;
      case '-':
	a=pop();
	b=pop();
	push(b-a);
	break;
      case '*':
	a=pop();
	b=pop();
	push(b*a);
	break;
      }
      s++;
    }
  }
  return pop();
}

