#include<stdio.h>
int main()
{
  int N,r,count=0;
  scanf("%d",&N);
  while(N>0)
  {
    r=N%10;
    if(r%7==0)
    {
      count++;
    }
    N=N/10;
  }
  if(count>0)
    printf("Yes");
  else
    printf("No");
  return 0;
}
