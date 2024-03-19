#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef long long ll;
const double PI = 3.1415926535897932384626433;
const int MOD = 1e9+7;
const int INF = 1e9;
#define rep(i, n) for(int i=0;i<(n);++i)

//prototype declaration

//gloval variable

int min(int x, int y){
  if(x < y) return x;
  else return y;
}

int main(void){
  char s[200000];
  scanf("%s", s);
  int red=0, blue=0;
  for(int i = 0; s[i]!='\0'; i++){
    if(s[i]=='0') red++;
    else blue++;
  }
  printf("%d\n", 2*min(red, blue));
  return 0;
}
