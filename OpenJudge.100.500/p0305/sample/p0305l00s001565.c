#include <stdio.h>
#define INFTY 100000000;

int ct;
int L[250001],R[250001];
void merge(int A[], int left, int mid, int right){
  int i,j,k;
  int n1 = mid - left;
  int n2 = right - mid;
  //L[0...n1], R[0...n2] を生成
  for (i = 0; i < n1; i++) L[i] = A[left + i];
  for (i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1] = INFTY;
  R[n2] = INFTY;
  i = 0;
  j = 0;
  for (k = left; k < right ; k++){
    ct++;
    if (L[i] <= R[j]){
      A[k] = L[i];
      i = i + 1;
    }
    else{
      A[k] = R[j];
      j = j + 1;
    }
  }
}
void mergeSort(int A[], int left,int right){
  int mid;
  if (left+1 < right){
    mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}
int main(){
  int A[500001],i,a;
  ct = 0;
  scanf("%d",&a);
  for(i=0; i<a; i++) scanf("%d",&A[i]);
  mergeSort(A, 0, a);
  for(i=0; i<a-1; i++) printf("%d ",A[i]);
  printf("%d\n%d\n",A[i],ct);
}
