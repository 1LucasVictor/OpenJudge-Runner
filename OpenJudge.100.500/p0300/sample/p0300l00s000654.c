#include<stdio.h>

int linearSearch(int [],int ,int );

int main()
{
  int S[100000],key,n,q,i,c=0;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&S[i]);
    }
  scanf("%d",&q);
  for(i=0;i<q;i++)
    {
      scanf("%d",&key);
      if(linearSearch(S,n,key)==1)c++;
    }
  printf("%d\n",c);

  return 0;
}


int linearSearch(int S[],int n,int key)
{
  int  i=0,count=0;
  for(i=0;i<n;i++)
    {
      if(S[i]==key)return 1;
    }
}