#include<stdio.h>
int main()
{
 int N,D,X,Y,i,t=0;
  scanf("%d %d",&N,&D);
  for(i=0;i<N;i++)
  {
    scanf("%d %d", &X, &Y);
    if(X*X+Y*Y<=D*D)
  {
    t=t+1;
  }
  }
  
  printf("%d",t);
  return 0;
}