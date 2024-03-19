#include<stdio.h>
#define MAX 500000
#define NIL 100000000
int L[MAX/2+2],R[MAX/2+2];
int cnt;
void merge(int A[],int left,int mid,int right){
  int i,j,k;
  int n1=mid-left;
  int n2=right-mid;
  for(i=0;i<n1;i++)L[i]=A[left+i];
  for(i=0;i<n2;i++)R[i]=A[mid+i];
  L[n1]=R[n2]=NIL;
  i=0;j=0;
  for(k=left;k<right;k++){
    cnt++;
    if(L[i]<=R[j]){
      A[k]=L[i++];
    }else{
      A[k]=R[j++];
    }
  }
}
void sort(int A[],int left,int right){
  if(left+1<right){
    int mid =(left+right)/2;
    sort(A,left,mid);
    sort(A,mid,right);
    merge(A,left,mid,right);
  }
}
int main(){
  int A[MAX],n,i;
  cnt=0;
  scanf("%d", &n);
  for(i=0;i<n;i++)scanf("%d",&A[i]);
  sort(A,0,n);
  for(i=0;i<n-1;i++){
    printf("%d ",A[i]);
  }
  printf("%d\n",A[i]);
  printf("%d\n",cnt);
  return 0;
}