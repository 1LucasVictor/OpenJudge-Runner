#include<stdio.h>

int snl=1000000;
int cnt=0;
int A[1000000];

void Merge(int A[],int left,int mid,int right) {
  
  int i,j,k,n1,n2;
  
  int L[1000000],R[1000000];
  n1 = mid -left;
  n2 = right - mid;
  for(i=0;i<n1;i++) 
    L[i] = A[left + i];
  
  for(j=0;j<n2;j++) 
    R[j] = A[mid + j];
  
  L[n1] = snl;
  R[n2] = snl;
  
  i=0;
  j=0;
  for(k=left;k<right;k++) {      
    if(L[i] <= R[j]) {
      A[k] = L[i];
      cnt++;
      i++;
    }    
    else { 
      A[k] = R[j];
      cnt++;
      j++;    
    }
  }
}
void MergeSort(int A[],int left,int right) {
  
  int mid;

  if(left + 1< right) {
    mid = (left + right) /2;
    MergeSort(A,left,mid);
    MergeSort(A,mid,right);
    Merge(A,left,mid,right); 
 }
}

int main(void) {

  int i,n;

  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  MergeSort(A,0,n);
  for(i=0;i<n-1;i++){
   printf("%d ",A[i]);
  }
  printf("%d",A[n-1]);
  printf("\n%d\n",cnt); 
  return 0;
}
 