#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void push(int *a,int x);
int pop(int *a);
int isEmpty();
int top=0;
int main()
{
  int i=0,j=0,k=0,num=0,a,b,c,d[100],h,r;
  char n[10],ch,dum,fi;
  while(1){
    fi=scanf("%s",n);
    
    if(fi==EOF)break;
    switch(n[0]){
    case '+':
      a=pop(d);
      b=pop(d);
      push(d,a+b);
      break;
    case '-':
      a=pop(d);
      b=pop(d);
      push(d,b-a);
      break;
    case '*':
      a=pop(d);
      b=pop(d);
      push(d,b*a);
      break;
    case ' ':
      break;
    default:
      num=atoi(n);
      push(d,num);
      break;
    }
  }
  printf("%d\n",d[top]);
  return 0;
}
void push(int *a, int x){
  top=top+1;
  a[top]=x;
  //printf("%d\n",a[top]);
}
int pop(int *a){
  if(isEmpty()==1){
    exit(2);
    }else{
    top=top-1;
    return a[top+1];
  }
}
int isEmpty(){
  if(top==0){
    return 1;
  }else{
    return 0;
  }
}

