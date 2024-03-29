#include <stdio.h>
#include <stdlib.h>

#define INF 1000000001

void merge(int *, int, int, int);
void mergeSort(int *, int, int);

int cnt=0;

int main(){

  int i,n,s[500000];
  
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&s[i]);

  mergeSort(s, 0, n);
  
  for(i=0;i<n;i++){
    if(i)printf(" ");
    printf("%d",s[i]);
  }
  printf("\n%d\n",cnt);
  return 0;
}


void mergeSort(int *A, int left, int right){

  int mid;
  
  if(left+1 < right){
    mid = (left+right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);


  }


}

void merge(int *A, int left, int mid, int right){

  int i,j,k,n1,n2,l[500000],r[500000];
  n1 = mid - left;
  n2 = right - mid;
  
  // l = malloc(sizeof(int)*n1);
  // r = malloc(sizeof(int)*n2);

  for(i=0;i<n1;i++)l[i]=A[left+i];
  for(i=0;i<n2;i++)r[i]=A[mid+i];
  l[n1]=INF;r[n2]=INF;
  i=0;j=0;

  for(k=left;k<right;k++){
    cnt++;
    if(l[i]<=r[j]){
      A[k]=l[i];
      i++;
    }
    else{
      A[k]=r[j];
      j++;
    }

  }
  
}

