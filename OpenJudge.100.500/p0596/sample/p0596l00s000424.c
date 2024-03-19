#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef long long ll;

int max(int a, int b){
  if(a > b) return a;
  else return b;
}
int min(int a, int b){
  if(a < b) return a;
  else return b;
}

int sort(const void *a ,const void *b){
  return *(int*)a - *(int*)b;
}

int main(){

  char s[100];
  scanf("%s",s);

  int len = strlen(s);
  int a=0,b=0;
  for(int i = 0; i < len; ++i){
    if(s[i] == '0') a++;
    else b++;
  }
  a = min(a,b);

  printf("%d",a*2);

  return 0;
}
