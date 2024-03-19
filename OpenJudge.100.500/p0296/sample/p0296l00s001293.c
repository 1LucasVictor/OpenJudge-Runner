#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 100

int main(){
  int x,top=0;
  char s[N];
  int S[N];

  while(scanf("%s", s)!=EOF){
    if (s[0] == '+'){
      S[top-2] = S[top-2] + S[top-1];
      top = top - 1;
    }else if(s[0]== '-' ){
      S[top-2] = S[top-2] - S[top-1];
      top = top - 1;
    }else if(s[0] == '*'){
      S[top-2] = S[top-2] * S[top-1];
      top = top - 1;
    }else{
      x = atoi(s);
      S[top] = x;
      top++;
    }
  }
  printf("%d\n",S[top-1]);
  return 0;
}