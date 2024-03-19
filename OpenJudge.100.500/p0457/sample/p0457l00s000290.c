#include<stdio.h>
/* 値を入れ替える関数 */
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
int partition (int array[], int left, int right) {
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
void quick_sort (int array[], int left, int right) {
  int pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);   // pivotを境に再帰的にクイックソート
    quick_sort(array, pivot+1, right);
  }
}

int main(void){
    int i,s=0,t=0;
    int n,m,k,c=0;

    scanf("%d %d %d",&n,&m,&k);

    int a[n+m-1];

    for(i = 0; i <= n-1; i++){
        a[i] = '\0';
    }
    for(i = 0; i <= n-1 ;i++){
        scanf("%d",&a[i]);
    }
    for(; i <= m + n-1 ;i++){
        scanf("%d",&a[i]);
    }

    quick_sort(a, 0, n+m-1);

    for(c = 0,i = 0; c <= k; i++){
        c = c+ a[i];
    }


    printf("%d",i - 1);

    
    return 0;
    
}
