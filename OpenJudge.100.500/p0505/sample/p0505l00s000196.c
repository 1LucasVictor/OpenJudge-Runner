#include<stdio.h>

int main(void)
{
  int H,N,i,cnt=0;
  int A[10000] = {0};
  
  scanf("%d %d",&H,&N);
  
  for(i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
  
  while(H>0 && cnt<N)
  {
    H -= A[cnt++];
  }
  
  if(H<=0) printf("Yes\n");
  else printf("No\n");
  
  return 0;
}