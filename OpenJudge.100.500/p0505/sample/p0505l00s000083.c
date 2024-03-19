#include<stdio.h>
int main()
{
  int H,N,i,sum=0;
  scanf("%d %d",&H,&N);
  int arr[N];
  for(i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<N;i++)
  {
    sum=sum+arr[i];
  }
  if(sum>=H)
  {
    printf("Yes");
  }
  else
    printf("No");
  return 0;
}
  
