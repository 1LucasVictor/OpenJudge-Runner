#include <stdio.h>
#include <limits.h>
#define N 100000

void Merge(int *,int ,int ,int );
void MergeSort(int *,int ,int );

int s[N], count;

int main(){
  int i,n,left=0,right;
  scanf("%d",&n);
  right=n;
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  MergeSort(s,left,right);
  for(i=0;i<n-1;i++) printf("%d ",s[i]);
  printf("%d\n%d\n",s[n-1],count);
  return 0;
}

void Merge(int *s,int left,int mid,int right){
  int i,n1,n2,k,j;
  n1=mid-left;
  n2=right-mid;

  int L[n1+1],R[n2+1];

  for(i=0;i<n1;i++){
    L[i]=s[left+i];
  }
  for(i=0;i<n2;i++){
    R[i]=s[mid+i];
  }
  L[n1]=INT_MAX;
  R[n2]=INT_MAX;
  i=0;
  j=0;
  for(k=left;k<right;k++){
    if(L[i]<=R[j]){
      s[k]=L[i];
      i++;
    }
    else{
      s[k]=R[j];
      j++;
    }
    count++;
  }
}

void MergeSort(int *s,int left,int right){
  long mid;
  if(left+1<right){
    mid=(left+right)/2;
    MergeSort(s,left,mid);
    MergeSort(s,mid,right);
    Merge(s,left,mid,right);
  }
}