#include<stdio.h>
#include<math.h>
#define MAX 500000

void merge(int, int, int);
void mergeSort(int ,int); 
int count;
int S[MAX];
int main(){
  int i,j;
  int n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  mergeSort(0,n);

  for(j=0;j<n;j++){
     printf("%d",S[j]);
     if(j!=n-1)printf(" ");
  }
  printf("\n");
   
  printf("%d\n",count);
  return 0;
  
}  

void merge(int left,int mid,int right){
  int n1,n2,i,j,k;
  int L[MAX],R[MAX];
  n1 = mid - left;
  n2 = right - mid;
  for(i=0;i<=n1-1;i++){
    L[i]=S[left+i];
  }

  for(i=0;i<=n2-1;i++){
    R[i]=S[mid+i];
  }
  
  L[n1]=MAX;
  R[n2]=MAX;
  i=0;
  j=0;

  for(k=left;k<=right-1;k++){
    if(L[i]<=R[j]){
      S[k]=L[i];
      i=i+1;
    count++;  
    }else{
      S[k]=R[j];
      j=j+1;
      count++;
    }
  }
}

void mergeSort(int left,int right){
  int mid;  
  if(left+1<right){
    mid = (left+right)/2;
    mergeSort(left,mid);
    mergeSort(mid,right);
    merge(left,mid,right);
  }
}

  

