#include <stdio.h>
#define MAX 1000000000
int n,A[MAX];
int count=0;
void merge(int [MAX],int,int,int);
int mergeSort(int [MAX],int,int);

int main(){
  int i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  mergeSort(A,0,n);
  for(i=0;i<n;i++){
    printf("%d",A[i]);
    if(i<n-1) printf(" ");
  }
  printf("\n");
  printf("%d\n",count);
  return 0;
  
}

void merge(int A[],int left,int mid,int right){
  int n1,n2;
  int i,k,j;
  
  n1=mid-left;
  n2=right-mid;
  int L[n1],R[n2];  
  
  for(i=0;i<n1;i++){
    L[i]=A[left+i];
  }
  for(i=0;i<n2;i++){
    R[i]=A[mid+i];
  }
  L[n1]=MAX;
  R[n2]=MAX;
  i=0;
  j=0;
  for(k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
      count++;
    }
    else {
      A[k]=R[j];
      j++;
      count++;
    }
  }
}
  mergeSort(int A[],int left,int right){
    int mid;
    if(left+1<right){
      mid=(left+right)/2;
      mergeSort(A,left,mid);
      mergeSort(A,mid,right);
      merge(A,left,mid,right);
    }
  }