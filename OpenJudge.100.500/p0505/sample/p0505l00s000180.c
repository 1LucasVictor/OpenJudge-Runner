#include <stdio.h>

int main(void)
{
 int H,N,i,total=0;
 
 scanf("%d %d",&H,&N);
 
  int A[100001];
  for(i=0;i<N;i++)
  scanf("%d ",&A[i]);
 
 
 //qsort(A,N,sizeof(long int),compa);
 for(i=0;i<N;i++)
 {
  H -= A[i];
  if(H <=0) 
  {
    printf("Yes\n"); 
    return 0;
  }
 }  
  printf("No\n");
 return 0;
}