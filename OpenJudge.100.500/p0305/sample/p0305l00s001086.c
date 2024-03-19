#include<stdio.h>
#define MAX 100000000
void Merge(int,int,int);
void MergeSort(int,int);
int n;
int S[MAX];
int count=0;
int main(){
  int i;
  
  scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  
  
  MergeSort(0,n);
   
   
   for(i=0;i<n-1;i++){
   printf("%d ",S[i]);
}
 
   printf("%d\n%d\n",S[i],count);
 return 0;
}

void Merge(int left,int mid,int right){
  int n1,n2,L[25000],R[25000];
  int i,j,k;
  
  n1 = mid - left;
  n2 = right - mid;
  
  for(i=0;i<n1;i++){
    L[i] = S[left + i];
  }
  
  for(i=0;i<n2;i++){
    
    R[i] = S[mid+i];
    
  }

  L[n1]=100000000;
  R[n2]=100000000;
  i=0;
  j=0;
  
  for(k=left;k<right;k++){
    count++;  
    if (L[i] <= R[j]){
      S[k] = L[i];
      i = i+1;
    }
    else {
      S[k] = R[j];
      j = j+1;
    }
  }

}
 
 

void MergeSort(int left,int right){
 
  int mid;
  if (left+1 < right){
   
    mid = (left + right)/2;
    MergeSort(left, mid);
    MergeSort(mid, right);
    Merge(left, mid, right);



  }





}