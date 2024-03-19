#include<stdio.h>

void swap (int *x, int *y) {
  int temp;    

  temp = *x;
  *x = *y;
  *y = temp;
}


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

int main (void) {
  int array[200000];
  int i,n, tmp=0;
  scanf("%d", &n);
  for(i=0; i<n; i++){
  	scanf("%d", &array[i]);
  }

  quick_sort(array, 0, n-1);

	for(i=1; i<n; i++){
	if(array[i-1] == array[i]){
		tmp = -1;
		break;
		}
	}
	if(tmp==0) printf("YES\n");
	else printf("NO\n");
  return 0;
}