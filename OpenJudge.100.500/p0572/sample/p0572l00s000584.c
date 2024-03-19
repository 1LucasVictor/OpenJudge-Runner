#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//gcdやり直す

void swap (int *x, int *y) {
  int temp;    

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




/****************************************\
| Thank you for viewing my code:)        |
| Written by RedSpica a.k.a. RanseMirage |
| Twitter:@asakaakasaka                  | 
\****************************************/

int main(void){
  long int l,r;
  scanf("%ld%ld",&l,&r);
  if(r-l>=2019){
    printf("0\n");
    return 0;
  }


  int i,j;
  int ans=2020;
  for(i=l;i<r;i++){
    for(j=i+1;j<=r;j++){
      int a=(i*j)%2019;

      if(a<ans){
        ans=a;
      }
    }
  }

  printf("%d\n",ans);

  return 0;
}