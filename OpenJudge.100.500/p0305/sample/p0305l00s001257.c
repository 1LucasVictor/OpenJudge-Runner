#include<stdio.h>
#include<stdlib.h>
#define INFTY 1000000000;
void merge(int[], int, int, int);
void mergeSort(int[], int, int);
int count=0;
int main(){
  int *A, n, i, l=0;
  scanf("%d",&n);
  A = (int *)malloc(sizeof(int) * n);
  for(i=0; i<n; i++)
    scanf("%d",&A[i]);
  mergeSort(A, 0, n);
  for(i=0; i<n; i++){
    printf("%d",A[i]);
    if(i != n - 1)
      printf(" ");
  }
  printf("\n%d\n",count);

  return 0;
}

void merge(int *A, int left, int mid, int right){
  int n1=mid-left, n2=right-mid, i, j, k;
  int L[n1 + 1];
  int R[n2 + 1];
  for(i=0; i<n1; i++)
    L[i] = A[left + i];
  for(i=0; i<n2; i++)
    R[i] = A[mid + i];
  L[n1] = INFTY;
  R[n2] = INFTY;
  i = j = 0;
  for(k=left; k<right; k++){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i = i + 1;
      count++;
    }
    else{
      A[k] = R[j];
      j = j + 1;
      count++;
    }
  }
}

void mergeSort(int *A, int left, int right){
  int mid;
  if(left+1 < right){
    mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}