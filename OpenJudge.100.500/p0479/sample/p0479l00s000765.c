#include<stdio.h>

int main(void)
{
  int a[200000];
  int A[200000]={0};
  int n;
  
  scanf("%d", &n);
  for(int i=1;i<n;i++)
    scanf("%d", &a[i]);
  for(int i=1;i<n;i++)
    A[a[i]]++;
  for(int i=1;i<=n;i++)
    printf("%d\n",A[i]);
  
  return 0;
}
  