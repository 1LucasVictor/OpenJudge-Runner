#include<stdio.h>
#include<string.h>
void swap (int *x, int *y) {
  int temp;    // 値を一時保存する変数

  temp = *x;
  *x = *y;
  *y = temp;
}

/***
* pivotを決め、
* 全データをpivotを境目に振り分け、
* pivotの添え字を返す
***/
int partition (long array[], int left, int right) {
  int i, j, pivot;
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
void quick_sort (long array[], int left, int right) {
  int pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);   // pivotを境に再帰的にクイックソート
    quick_sort(array, pivot+1, right);
  }
}

int main(void){
   int N,flag=0;
   long A[200001];
   scanf("%d",&N);
   for(int i=0;i<N;i++){
      scanf("%ld",&A[i]);
   }
   quick_sort(A,0,N-1);
   for(int i=0;i<N;i++){
      if(A[i]==A[i+1]){
         flag=1;
         break;
      }
   }
   if(flag==1){
      printf("NO");
   }else{
      printf("YES");
   }
   return 0;
}
