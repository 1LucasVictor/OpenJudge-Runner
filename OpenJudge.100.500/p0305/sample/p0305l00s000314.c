#include<stdio.h>
#define nmax 500000


void merge(int,int,int);
void mergeSort(int,int);

int A[nmax],count=0;
int main(){
  
  int n;
  int i;

  scanf("%d",&n);
  for( i = 0 ; i < n ; i++ )
    scanf("%d",&A[i]);

  mergeSort(0,n);

  for( i = 0 ; i < n-1 ; i++ )
    printf("%d ",A[i]);
  printf("%d\n",A[i]);
  printf("%d\n",count);

  return 0;
}

void merge(int left,int mid,int right)
{
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1+1],R[n2+1];
  int i,j,k;

  for( i = 0 ; i < n1 ; i++ )
    L[i] = A[left+i];
  for(i = 0 ; i < n2 ; i++ )
    R[i] = A[mid+i];
  L[n1] = 10000000000;
  R[n2] = 10000000000;
  i = 0;
  j = 0;
  for( k = left ; k < right ; k++ )
    {
      count++;
      if(L[i] <= R[j]){
	A[k] = L[i];
	i = i + 1;
      }
      else
	{
	  A[k] = R[j];
	  j = j + 1;
	}
    }
}

void mergeSort(int left,int right)
{
  int mid;

  if( left+1 < right )
    {
      mid = (left+right)/2;
      mergeSort(left,mid);
      mergeSort(mid,right);
      merge(left,mid,right);
    }

}