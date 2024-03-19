#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void Push(int);
int Pop();
int t,P[199];
int main(int argc,char *argv[]){
  int a,b;
  char p[100];
  t=0;
  while(scanf("%s",p)!=EOF){
    if(p[0]=='+'){
      a=Pop();
      b=Pop();
      Push(a+b);
    }
    else if(p[0]=='-'){
      b=Pop();
      a=Pop();
      Push(a-b);
    }
    else if(p[0]=='*'){
      a=Pop();
      b=Pop();
      Push(a*b);
    }
    else Push(atoi(p));
  }
  printf("%d\n",Pop());
  return 0;
}

void Push(int a){
  P[++t]=a;
}

int Pop(){
  t--;
  return P[t+1];
}

