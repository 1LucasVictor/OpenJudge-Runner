#include<stdio.h>
#define N_MAX 100000  // 荷物の最大個数
#define K_MAX 100000  // トラックの最大数
#define W_MAX 10000   // 荷物の重さの最大値

// 最大積載量が P のトラック k 台で何個の荷物を載せれるかを返す
int check(long int P, int n, int k, int *T)
{
  int i, j;
  long int s;
  
  i = 0;
  for (j = 0; j < k; j++) {
    s = 0;
    while (s + T[i] <= P) {
      s += T[i];
      i++;
      if (i == n)
        return n;
    }
  }
  return i;
}

// n 個の荷物を載せられる最小の積載量 P を求める
long int solve(int n, int k, int *T)
{

  long int left, right, mid;
  left = 0;
  right = W_MAX* N_MAX;

  while (right - left > 1) {  // 解に収束するまで繰り返す(解は right に入る)
    mid = (left + right)/2;
    //printf("%ld %ld %ld ", left, mid, right);
    int v = check(mid, n, k, T);  // 積載量を mid とした時に載せられる荷物の数を求める
    if (v == n)  // n 個の荷物を載せられる間は，探索範囲の最大値を小さくする
      right = mid;  
    else
      left = mid;
    //printf(": %d\n", v);
  }
  return right;
}

int main(void)
{
  int n;   // 荷物の個数
  int k;   // トラックの台数
  int T[N_MAX]; // 各荷物の重さ
  long int ans;

  // 入力
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++)
    scanf("%d", &T[i]);
  
  ans = solve(n, k, T);

  printf("%ld\n", ans);  // 答えを出力

  return 0;
}
