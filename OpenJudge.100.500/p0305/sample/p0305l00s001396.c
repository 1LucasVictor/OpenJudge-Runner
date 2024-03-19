#include<stdio.h>

void merge(int *, int, int, int);
void mergeSort(int *, int, int);

int count=0;

int main()
{
  int i;
  int S[500000], n;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &S[i]);
  }

  mergeSort(S, 0, n);

  for(i = 0; i < n-1; i++){
    printf("%d ", S[i]);
  }
  printf("%d\n", S[n-1]);
  printf("%d\n", count);

  return 0;
}

void merge(int *S, int left, int mid, int right)
{

  int i, j, k, l;
  int L[mid - left], R[right - mid];

  for(i = 0; i <= mid-left-1; i++) L[i] = S[left + i];
  for(i = 0; i <= right-mid-1; i++) R[i] = S[mid + i];

  L[mid - left] = 250000;
  R[right - mid] = 250000;
  i = 0;
  j = 0;

  for(k = left; k <= right-1; k++){
    if(L[i] <= R[j]){
      S[k] = L[i];
      i = i + 1;
    }
    else{
      S[k] = R[j];
      j = j + 1;
    }
    count++;
  }
}

void mergeSort(int *S, int left, int right)
{

  int mid;

  if(left+1 < right){
    mid = (left + right)/2;
    mergeSort(S, left, mid);
    mergeSort(S, mid, right);
    merge(S, left, mid, right);
  }
}