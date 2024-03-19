#include<stdio.h>
#include<math.h>
#define MAX 50000
#define INF 200000000
int cont;
int L[MAX/2+2], R[MAX/2+2];

void merge(int A[], int left, int mid, int right){
  int n1,n2,i,j,k;
  n1 = mid - left;
  n2 = right - mid;
  for( i = 0; i < n1;i++){
    L[i] = A[left + i];
      }
  for(i = 0; i < n2;i++){
    R[i] = A[mid + i];
  }
    L[n1] = INF;
    R[n2] = INF;
    i = 0;
    j = 0;
    for (k = left ; k < right ;k++){
      cont++;
    if(L[i] <= R[j]){
      A[k] = L[i];
      i = i + 1;
	}
    else{ 
      A[k] = R[j];
      j = j + 1;
	}
  }
  }
void mergeSort(int A[],int left, int right){
  int mid;
  if(left+1 < right){
    mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
      }
}

int main(){
  int i,A[MAX],n;
  
  scanf("%d",&n);
  cont = 0;
  for(i=0;i < n ;i++){
    scanf("%d",&A[i]);
    if(A[i] >= INF){
      return 1;
    }
  }
  
  mergeSort(A,0,n);
  
  for(i=0;i<n;i++){
    printf("%d",A[i]);
    if(i==n-1)printf("\n");
    else printf(" ");
  }
  printf("%d\n",cont);

  
  return 0;
}

