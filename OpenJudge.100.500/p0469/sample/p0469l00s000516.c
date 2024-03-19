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
#define max(a,b) ((a>b)?a:b)
#define ABS(a) (((a)>(0))?a:-(a))
#define LL long long
#define MOD 1000000007//10^9+7(素数)
//---------------------------------------------------

int main(void)
{
  int k;
  int a,b;
  scanf("%d", &k);
  scanf("%d %d",&a, &b );
  for (size_t i = a; i <= b; i++) {
    if (i % k == 0) {
      printf("OK\n" );
      return 0;
    }
  }
  printf("NG\n" );
  return 0;
}
