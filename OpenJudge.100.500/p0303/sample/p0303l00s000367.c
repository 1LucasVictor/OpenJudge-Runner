/*割り当て*/
#include <stdio.h>
#define N 100000

int t[N];//荷物の値を格納
int n, k;

int check(int); //Pを入力として、積むことのできる荷物の数を返す関数
int solve(void); //最大積載量Pを返す関数

//最大積載量Pのk台のトラックで何個の荷物をかえす
int check(int p){
  int i, j;
  int x=0;

  i=0;
  for (j=0; j<k; j++){
    while (x+t[i] <= p){
      x += t[i];
      i++;
      if (i==n) return i;
    }
    x=0;
  }
  return i;
}

int solve(){
  int p, left, mid, right;

  left = 0;
  right = 1000000000;

  while(right-left > 1){
    mid = (left+right) / 2;
    if (check(mid) >= n) right = mid;
    else left = mid;
  }
  return right;
}



int main(){
  int i;

  scanf("%d%d", &n, &k);
  for (i=0; i<n; i++)
    scanf("%d", &t[i]);

  printf("%d\n", solve());
  

  return 0;
}

