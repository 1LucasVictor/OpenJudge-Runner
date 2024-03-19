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
  //find P as binary search
  p=(minp+maxp)/2;
  while(minp<maxp)
    {
      if(isPossible(w,n,k,p)==1) maxp=p;
      else minp=p+1;
      p=(minp+maxp)/2;
    }
  printf("%d\n",p);
  return 0;
}
int isPossible(int w[],int n,int k,int p)
{
  int i;//counter
  int num=1;//the number of trucks needed
  int temp=0;//temporary weight of packages
  for(i=0;i<n-1;i++)
    {
      temp+=w[i];
      //printf("%d ",w[i]);
      if(temp+w[i+1]>p)
	{
	  num++;
	  temp=0;
	  //printf("| ");
	}
    }
  //printf("\n");
  if(num<=k)
    {
      //printf("p=%d,num=%d:OK\n",p,num);
      return 1;
    }
  else
    {
      //printf("p=%d,num=%d:NG\n",p,num);
      return 0;
    }
}

