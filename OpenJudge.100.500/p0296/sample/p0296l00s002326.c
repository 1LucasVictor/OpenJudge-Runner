#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10000
int max,S[N];
void sonyou(int x){
  S[++max]=x;
}
int ketunyou(){
  return S[max--];
}
int main(){
  int a,b;
  char s[N];
  max=0;
  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      b=ketunyou();
      a=ketunyou();
      sonyou(a+b);
    }
    else if (s[0]=='-'){
      b=ketunyou();
      a=ketunyou();
      sonyou(a-b);
    }
    else if(s[0]=='*'){
      b=ketunyou();
      a=ketunyou();
      sonyou(a*b);
    }
    else {
      sonyou(atoi(s));
    }
  }
  printf("%d\n",ketunyou());
  return 0;
}
