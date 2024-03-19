#include<stdio.h>

int sensearch(int *,int,int);

int main()
{
  int n,i,key,sum=0,q;

  scanf("%d",&n);

  int a[n];

  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }

  scanf("%d",&q);
  for(i=0;i<q;i++)
    {
      scanf("%d",&key);
      if(sensearch(&a[0],n,key))sum++;
    }
  printf("%d\n",sum);

  return 0;
}

int sensearch(int *a,int n,int key)
{
  int i=0;
  a[n]=key;
  while(a[i]!=key)i++;

  return i != n;
}

