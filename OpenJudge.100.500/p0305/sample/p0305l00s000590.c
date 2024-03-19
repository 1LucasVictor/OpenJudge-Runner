#include<stdio.h>
#include<stdlib.h>
#define RENGE 500000
#define N 1000000

void merge(int *,int,int,int);
void mergeSort(int *,int,int);
int *L,*R,cnt=0;

int main(){
  int n,S[500000],i;
    scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
 
  mergeSort(S,0,n);

  for(i=0;i<n;i++){
    printf("%d",S[i]);
    if(i<n-1) printf(" ");
  }
  printf("\n%d\n",cnt);
   

  return 0;
}

void merge(int *S,int left,int mid,int right){
  int n1,n2,i,k,j;
  n1 = mid - left;
  n2 = right - mid;
  L=(int *)malloc((n1+1)*sizeof(int));
  R=(int *)malloc((n2+1)*sizeof(int));
  
  for(i=0;i<n1;i++) L[i] = S[left + i];
  for(i=0;i<n2;i++) R[i] = S[mid + i];
  L[n1]=N;
  R[n2]=N;
  i = 0;
  j = 0;
  for(k=left;k<right;k++){
    cnt++;
    if(L[i] <= R[j]){
      S[k] = L[i];
      i=i+1;
    }else{
	S[k]=R[j];
	j=j+1;
    }
  }

}



void mergeSort(int *S,int left,int right){
  int mid;
  if(left+1<right){
    mid = (left + right)/2;
    mergeSort(S,left,mid);
    mergeSort(S,mid,right);
    merge(S,left,mid,right);
  }

}

