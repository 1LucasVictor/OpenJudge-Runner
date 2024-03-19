#include <stdio.h>

#define AMAX 100000

int temp[AMAX],cnt=0;

void mergeSort(int [AMAX],int,int);

int main(){
  int i,n;
  int A[AMAX];
  
  scanf("%d",&n);

  for(i=0; i<n; i++)
    scanf("%d",&A[i]);

  mergeSort(A,0,n-1);

  for(i=0; i<n; i++)
    i<n-1 ? printf("%d ",A[i]) : printf("%d\n",A[i]);

  printf("%d\n",cnt);

  return 0;
}

void mergeSort(int A[AMAX],int l,int r){
  int i,j,k,m;

  if(l >= r)
    return;

  m = (l + r)/2;

  mergeSort(A,l,m);
  mergeSort(A,m+1,r);

  for(i=l; i<=m; i++)
    temp[i] = A[i];

  for(i=m+1, j=r; i<=r; i++, j--)
    temp[i] = A[j];

  i = l;
  j = r;

  for(k=l; k<=r; k++){
    cnt++;
    if(temp[i] <= temp[j])
      A[k] = temp[i++];
    else A[k] = temp[j--];
  }
  
}
 

