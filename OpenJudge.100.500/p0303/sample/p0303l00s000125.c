/*割り当て*/
#include <stdio.h>
#define N 100000

int t[N];//荷物の値を格納
int n, k;

int check(int); //Pを入力として、積むことのできる荷物の数を返す関数
int solve(void); //最大積載量Pを返す関数

//最大積載量Pのk台のトラックで何個の荷物がつめるか？
int check(int p){
  int i, j;
  int s=0;

  i=0;
  for (j=0; j<k; j++){
    while(s + t[i] <= p){
      s += t[i];
      i++;
      if (i==n) return i;
    }
    s=0;
  }
  return i;
}

int solve(){
  int p;
  
  p=0;
  while (1){
    if (check(p) >= n){
      return p;
    }
    p++;
  }
    
  
}



int main(){
  int i;

  scanf("%d%d", &n, &k);
  for (i=0; i<n; i++)
    scanf("%d", &t[i]);

  printf("%d\n", solve());
  

  return 0;
}

