#include <stdio.h>
#include <stdlib.h>

void swap (long long int *x, long long int *y);
int partition (long long int array[], int left, int right);
void quick_sort (long long int array[], int left, int right);

int main(void){
  int n;
  long long int* a;
  
  scanf("%d", &n);
  
  a = (long long int)malloc(sizeof(long long int)*n);
  for(int i=0; i < n; i ++){
    scanf("%lld ", &a[i]);
  }
  
  quick_sort(a, 0, n-1);
  
  for(int i=0; i < n-1; i ++){
  	if(a[i] == a[i+1]){
      printf("NO");
      return 0;
    }
  }
  printf("YES");
  return 0;
}

void swap (long long int *x, long long int *y) {
  long long int temp; 

  temp = *x;
  *x = *y;
  *y = temp;
}

int partition (long long int array[], int left, int right) {
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
void quick_sort (long long int array[], int left, int right) {
  int pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);   // pivotを境に再帰的にクイックソート
    quick_sort(array, pivot+1, right);
  }
}
