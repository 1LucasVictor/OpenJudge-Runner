#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;

void swap (ll *x, ll *y);
ll partition (ll array[], ll left, ll right);
void quick_sort (ll array[], ll left, ll right);

int main(void){
  long i;
  long N;
  int f=0;


  scanf("%ld",&N);
  ll A[N];

  for(i=0;i<N;i++){
    scanf("%I64d",&A[i]);
  }

  quick_sort(A,0,N-1);

  for(i=0;i<=N-2;i++){
      if(A[i]==A[i+1]){
          f=1;
          break;
      }
  }

  if(f==0){
    printf("YES\n");
  }else{
    printf("NO\n");
  }

  return 0;
}

/* 値を入れ替える関数 */
void swap (ll *x, ll *y) {
  ll temp;    // 値を一時保存する変数

  temp = *x;
  *x = *y;
  *y = temp;
}

/***
* pivotを決め、
* 全データをpivotを境目に振り分け、
* pivotの添え字を返す
***/
ll partition (ll array[], ll left, ll right) {
  ll i, j, pivot;
  i = left;
  j = right + 1;
  pivot = left;   // 先頭要素をpivotとする

  do {
    do { i++; } while (array[i] < array[pivot]);
    do { j--; } while (array[pivot] < array[j]);
    // pivotより小さいものを左へ、大きいものを右へ
    if (i < j) { swap(&array[i], &array[j]); }
  } while (i < j);

  swap(&array[pivot], &array[j]);   //pivotを更新

  return j;
}

/* クイックソート */
void quick_sort (ll array[], ll left, ll right) {
  ll pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);   // pivotを境に再帰的にクイックソート
    quick_sort(array, pivot+1, right);
  }
}
