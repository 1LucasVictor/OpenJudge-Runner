#include <stdio.h>
#include <stdlib.h>
#define INF 2000000000

long A[500000];
long L[250000], R[250000];

long merge(int left, int mid, int right)
{
  int i, j, k;
  int n1, n2;
  int cnt = 0;
 
  n1 = mid - left;
  for(i = 0; i < n1; i++)
    {
      L[i] = A[left + i];
    }
  L[n1] = INF;
  
  n2 = right - mid;
  for(i = 0; i < n2; i++)
    {
      R[i] = A[mid + i];
    }
  R[n2] = INF;

  i = 0;
  j = 0;
  for(k = left; k < right; k++)
    {
      cnt++;
      if(L[i] <= R[j])
	{
	  A[k] = L[i];
	  i = i + 1;
	}
      else
	{
	  A[k] = R[j];
	  j = j + 1;
	}
    }

  return cnt;
}

long mergeSort(int left, int right)
{
  long cnt = 0;
  int mid;

  if(left + 1 < right)
    {
      mid = (left + right)/2;
      cnt += mergeSort(left, mid);
      cnt += mergeSort(mid, right);
      cnt += merge(left, mid, right);
    }
  return cnt;
}

int main()
{
  int i;
  int n;
  int cnt;

  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%ld", &A[i]);
    }

  cnt = mergeSort(0, n);

  for(i = 0; i < n - 1; i++)
    {
      printf("%ld ", A[i]);
    }
  printf("%ld\n%d\n", A[n - 1], cnt);

  return 0;
}