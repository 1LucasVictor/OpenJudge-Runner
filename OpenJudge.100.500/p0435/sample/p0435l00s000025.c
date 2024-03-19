#include<stdio.h>
int main()
{
 int N,D;
  scanf("%d %d",&N,&D);
 int X[N],Y[N],i,t=0,k;
  for(i=0;i<N;i++)
  {
    scanf("%d %d", &X[i], &Y[i]);
  }
  for(i=0;i<N;i++)
  {
    k=X[i]*X[i]+Y[i]*Y[i];
  if(k<=D*D)
  {
    t=t+1;
  }
  }
  printf("%d",t);
  return 0;
}