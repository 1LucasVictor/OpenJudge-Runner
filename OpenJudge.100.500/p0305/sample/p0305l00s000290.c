#include<stdio.h>
#define N 500000
#define INFTY 200000000

void merge( int[], int, int, int );
void mergeSort( int[], int, int );

int count;

int main(){
  int s,i,A[N];
  
  scanf("%d",&s);
  for( i=0 ; i<s ; i++ ) scanf("%d",&A[i]);
  mergeSort( A, 0, s );
  for( i=0 ; i<s ; i++ ){
    if( i ) printf(" ");
    printf("%d",A[i]);
  }
  printf("\n");
  printf("%d\n", count);
  return 0;
}

void merge( int A[], int left, int mid, int right ){
  int n1, n2, i, j, k;
  n1 = mid - left;
  n2 = right - mid;
  
  int L[n1+1], R[n2+1];
  
  for( i=0 ; i<n1 ; i++ ) L[i] = A[ left+i ];
  for( i=0 ; i<n2 ; i++ ) R[i] = A[ mid+i ];
  
  L[n1] = INFTY;
  R[n2] = INFTY;
  i = 0;
  j = 0;
  
  for( k=left ; k<right ; k++ ){
    count++;
    if( L[i]<=R[j] ){
      A[k] = L[i];
      i++;
    }
    else{ 
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort( int A[], int left, int right ){
  int mid;
  if ( left+1<right ){
    mid = ( left+right ) / 2;
    mergeSort( A, left, mid );
    mergeSort( A, mid, right );
    merge( A, left, mid, right );
  }
}