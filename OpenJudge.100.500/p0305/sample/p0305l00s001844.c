// Exhaustive Search
#include <stdio.h>
#define MAX 500000
#define INFTY 10000000

void merge(int*, int, int, int);
void mergeSort(int*, int, int);

int count=0;

int main(){
  int i, n, A[MAX];

  scanf("%d", &n);
  for(i=0; i < n; i++){
    scanf("%d", &A[i]);
  }
  
  mergeSort(A, 0, n); // マージソートを実行

  for(i=0; i < n; i++){
    if(i != 0)printf(" ");
    printf("%d", A[i]);
  }
  printf("\n%d\n", count);
    
  return 0;
}

void merge(int *A, int left, int mid, int right){
  int i, j, k, n1, n2, L[MAX], R[MAX];
  n1 = mid - left;
  n2 = right - mid;
  for(i=0; i < n1; i++){
    L[i] = A[left + i];
  }
  for(i=0; i < n2; i++){
    R[i] = A[mid + i];
  }
  L[n1] = INFTY;
  R[n2] = INFTY;
  i = 0;
  j = 0;
  for(k=left; k < right; k++){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i++;
      count++;
    }
    else{
      A[k] = R[j];
      j++;
      count++;
    }
  }
}

void mergeSort(int *A, int left, int right){
  int mid;
  if(left + 1 < right){
    mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

