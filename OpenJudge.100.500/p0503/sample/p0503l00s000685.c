#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long int

void Swap(ll x[], ll i, ll j)
{
  int temp;

  temp = x[i];
  x[i] = x[j];
  x[j] = temp;
}

void QSort(ll x[], ll left, ll right)
{
  ll i, j;
  ll pivot;

  i = left;  /* ソートする配列の一番小さい要素の添字 */
  j = right; /* ソートする配列の一番大きい要素の添字 */

  pivot = x[(left + right) / 2]; /* 基準値を配列の中央付近にとる */

  while (1)
  { /* 無限ループ */

    while (x[i] < pivot) /* pivot より大きい値が */
      i++;               /* 出るまで i を増加させる */

    while (pivot < x[j]) /* pivot より小さい値が */
      j--;               /*  出るまで j を減少させる */
    if (i >= j)          /* i >= j なら */
      break;             /* 無限ループから抜ける */

    Swap(x, i, j); /* x[i] と x[j]を交換 */
    i++;           /* 次のデータ */
    j--;
  }

  if (left < i - 1)         /* 基準値の左に 2 以上要素があれば */
    QSort(x, left, i - 1);  /* 左の配列を Q ソートする */
  if (j + 1 < right)        /* 基準値の右に 2 以上要素があれば */
    QSort(x, j + 1, right); /* 右の配列を Q ソートする */
}

/* 配列の要素を交換する */

int main(void)
{
  ll a, c;
  ll *b;
  ll i, j;
  ll f;
  int t = 1;
  scanf("%lld", &a);
  b = (ll *)malloc(sizeof(ll) * a);

  for (i = 0; i < a; i++)
  {
    scanf("%lld", &c);
    b[i] = c;
  }

  QSort(b, 0, a - 1);

  for (i = 0; i < a - 1; i++)
  {
    if (b[i] == b[i + 1])
    {
      t = 0;
      break;
    }
  }

  if (t == 0)
  {
    printf("NO\n");
  }
  else
  {
    printf("YES\n");
  }
  return 0;
}