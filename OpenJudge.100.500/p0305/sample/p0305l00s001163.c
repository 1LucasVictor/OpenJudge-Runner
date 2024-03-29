#include <stdio.h>
#define INFTY 1000000000
#define N 500000

void merge(int [],int,int,int);
void mergesort(int [],int,int);

int cnt=0;

int main()
{
  int n,s[N],i;

  scanf("%d",&n);
  for(i=0 ; i<n ; i++)
  {
    scanf("%d",&s[i]);
  }

  mergesort(s,0,n);

  for(i=0 ; i<n-1 ; i++)
  {
    printf("%d ",s[i]);
  }
  printf("%d\n",s[n-1]);
  printf("%d\n",cnt);

  return 0;
}

void merge(int A[],int left,int mid,int right)
{
  int n1,n2,i,j,k;

  n1 = mid - left;
  n2 = right - mid;

  int L[n1],R[n2];

  for(i=0 ; i<n1 ; i++)
  {
    L[i] = A[left + i];
  }

  for(i=0 ; i<n2 ; i++)
  {
    R[i] = A[mid + i];
  }

  L[n1] = INFTY;
  R[n2] = INFTY;

  i=0;
  j=0;

  for(k = left ; k<right ; k++)
  {
    if(L[i] <= R[j])
    {
      A[k] = L[i];
      i = i+1;
      cnt++;
    }
    else
    {
      A[k]=R[j];
      j = j+1;
      cnt++;
    }
  }
}

void mergesort(int A[],int left,int right)
{
  int mid;
  if(left+1 < right)
  {
    mid = (left + right) / 2;
    mergesort(A, left, mid);
    mergesort(A, mid, right);
    merge(A,left,mid,right);
  }
}

