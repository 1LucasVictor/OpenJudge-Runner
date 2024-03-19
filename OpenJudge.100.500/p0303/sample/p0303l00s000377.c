#include<stdio.h>
#define N 100000
int isPossible(int[],int,int,int);//judging whether the separating is possible or not
int main(void)
{
  int i;//counter
  int n;//the number of packages
  int k;//the number of trucks
  int w[N];//weights of each packages
  int p;//answer
  int minp=0;//possible minimum value of p
  int maxp=0;//possible maximum value of p
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
    {
      scanf("%d",&w[i]);
      if(minp<w[i]) minp=w[i];
      maxp+=w[i];
    }
  for(p=minp;p<=maxp;p++)
    {
      if(isPossible(w,n,k,p)==1) break;
    }
  printf("%d\n",p);
  return 0;
}
int isPossible(int w[],int n,int k,int p)
{
  int i;//counter
  int num=1;//the number of trucks needed
  int temp=0;//temporary weight of packages
  for(i=0;i<n;i++)
    {
      temp+=w[i];
      if(temp+w[i+1]>p)
	{
	  num++;
	  temp=0;
	}
    }
  if(num<=k) return 1;
  else return 0;
}

