#include<stdio.h>
#define M 500000

void merge(int*,int,int,int);
void MergeSort(int*,int,int);

int count=0;
int main(){
  int n,i,A[M];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  MergeSort(A,0,n);
  for(i=0;i<n-1;i++){
    printf("%d ",A[i]);
  }
  printf("%d\n",A[i]);

  printf("%d\n",count);
  return 0;
}

void merge(int *A,int left,int mid,int right){
  int i,j,k,n1,n2,L[M],R[M];
  n1=mid-left;
  n2=right-mid;
    for(i=0;i<n1;i++){
      L[i]=A[left+i];
    }
    for(i=0;i<n2;i++){
      R[i]=A[mid+i];
    }
    L[n1]=999999999;
    R[n2]=999999999;
    i=0;
    j=0;
    for(k=left;k<right;k++){
      if(L[i]<=R[j]){
        A[k]=L[i];
        i++;
      }
      else{
        A[k]=R[j];
        j++;
      }
      count++;
    }
}

void MergeSort(int *A,int left,int right){
  int mid;
  if((left+1)<right){
    mid=(left+right)/2;
    MergeSort(A,left,mid);
    MergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}



