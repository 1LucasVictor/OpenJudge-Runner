#include <stdio.h>  /*入出力*/
#include <stdlib.h> /*標準ライブラリ*/
#include <string.h> /*文字列*/
#include <math.h>   /*計算*/
#include <assert.h> /*確認*/
#include <ctype.h>  /*文字操作*/
#include <stdbool.h>/*bool型*/
#include <limits.h>/*限界*/
//---------------------------------------------------
#define rep(i, n) for(int  i = 0; i < (n); i++)
#define ABS(a) (((a)>(0))?a:-(a))
#define LL long long
#define MOD 1000000007//10^9+7(素数)
//---------------------------------------------------
LL max(LL a, LL b){
  if (a > b) {
    return a;
  }else return b;
}

int main(void)
{
  char s[13];
  char t[13];
  char c;
  LL ans = 0;
  scanf("%s", &s);
  scanf("%s", &t);

  if (strlen(t) - strlen(s) != 1) {
    printf("No\n");
    return 0;
  }

  if (strlen(s) == 1) {
    if (s[0] == t[0]) {
      printf("Yes\n" );
    }else{
      printf("No\n" );
    }
    return 0;
  }

  for (size_t i = 0; i < strlen(s)-1; i++) {
    if (s[i] != t[i]) {
      printf("No\n" );
      return 0;
    }
  }

  printf("Yes\n");
  return 0;
}
