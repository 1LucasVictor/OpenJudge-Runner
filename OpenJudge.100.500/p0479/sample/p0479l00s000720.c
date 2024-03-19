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
void swap(int *a, int *b)
{
  int temp;
  temp = *a;*a = *b;*b = temp;
}
//---------------------------------------------------

int main(void)
{
  int n;
  int c;
  int a[200000]={0};
  scanf("%d",&n);
  for (size_t i = 0; i < n-1; i++) {
    scanf("%d",&c );
    a[c]++;
  }
  for (size_t i = 1; i <= n; i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}
