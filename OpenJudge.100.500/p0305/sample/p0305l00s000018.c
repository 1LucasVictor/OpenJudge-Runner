#include<stdio.h>
#define INFTY 2000000000

void merge(int *,int,int,int);
void mergeSort(int *,int,int);

int cnt;
int L[250000],R[250000];
int n;

int main()
{
  int i;
  int S[500000];

  cnt=0;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  mergeSort(S,0,n);
  for(i=0;i<n;i++){
    if(i!=0) printf(" ");
    printf("%d",S[i]);
  }
  printf("\n");
  printf("%d\n",cnt);
  
  return 0;
}
  
void merge(int *S, int left, int mid,int right){
  int i,j,k,n1,n2;
  
  n1 = mid - left;
  n2 = right - mid;
  //L[0...n1], R[0...n2] を生成
  for(i=0;i<n1;i++){
    L[i] = S[left + i];
  }
  for(i=0;i<n2;i++){
    R[i] = S[mid + i];
  }
  L[n1]=INFTY;
  R[n2]=INFTY;
  i=0;
  j=0;
  for(k=left;k<right;k++){
    cnt++;
    if(L[i]<=R[j]){
      S[k]=L[i];
      i++;
    }
    else{
      S[k]=R[j];
      j++;
    }
  }
}

void mergeSort(int *S, int left, int right){
  int mid,i;
  if(left+1<right){
    mid=(left + right)/2;
    mergeSort(S, left, mid);
    mergeSort(S, mid, right);
    merge(S, left, mid, right);
  }
}

