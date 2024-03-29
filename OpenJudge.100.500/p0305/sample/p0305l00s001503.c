#include <stdio.h>
void merge(int *,int,int,int);
void msort(int *,int,int);
int A[500000];
int L[500000];
int R[500000];
int n,count=0;
int main(){
  int i;
  int l,m,r;
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&A[i]);
  msort(A,0,n);

  for(i=0;i<n;i++){
    printf("%d",A[i]);
    if(i<n-1)printf(" ");
    else printf("\n");
  }
  printf("%d\n",count);
  return 0;
}

void msort(int *A,int left,int right){
  int mid;
  if(left+1<right){
    mid=(left+right)/2;
    msort(A,left,mid);
    msort(A,mid,right);
    merge(A,left,mid,right);
  }

}
void merge(int *A,int left,int mid,int right){
  int n1,n2;
  int i,j,k;
  n1=mid-left;
  n2=right-mid;
  for(i=0;i<n1;i++) L[i]=A[left+i];
  for(i=0;i<n2;i++) R[i]=A[mid+i];
  L[n1]=1000000000;
  R[n2]=1000000000;
  i=0;
  j=0;
  for(k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i=i+1;
    }
    else{
      A[k]=R[j];
      j=j+1;
    }
    count++;
  }


}