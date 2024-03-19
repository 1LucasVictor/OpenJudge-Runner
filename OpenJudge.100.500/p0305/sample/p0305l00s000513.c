#include <stdio.h>
#include <limits.h>

#define N 100000

void mergeSort(int,int);
void merge(int,int,int);

int S[N];
int L[N];
int R[N];
int count;

int main(void){

  int n,i,j;
  int left,right;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }

  left = 0;
  right = n;

  mergeSort(left,right);

  for(i=0;i<n;i++){
    if(i == n-1){
      printf("%d\n",S[i]);
      break;
    }
    printf("%d ",S[i]);
  }
  printf("%d\n",count);
  return 0;
}

void merge(int left,int mid,int right){

  int i,j,k,n1,n2;

  n1 = mid - left;
  n2 = right - mid;

  for(i=0;i<n1;i++){
    L[i] = S[left + i];
  }
  for(i=0;i<n2;i++){
    R[i] = S[mid + i];
  }
  L[n1] = INT_MAX;
  R[n2] = INT_MAX;

  i = 0;
  j = 0;

  for(k=left;k<right;k++){
    count++;
    if(L[i] <= R[j]){
      S[k] = L[i];
      i = i + 1;
    }
    else{
      S[k] = R[j];
      j = j + 1;
    }
  }
}


void mergeSort(int left,int right){

  int mid;

  if(left+1<right){
    mid = (left + right)/2;
    mergeSort(left,mid);
    mergeSort(mid,right);
    merge(left,mid,right);
  }
}