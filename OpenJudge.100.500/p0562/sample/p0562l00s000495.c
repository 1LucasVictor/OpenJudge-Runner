#include<stdio.h>
int main()
{
  int ori = 1;
  int A,B,ans = 0;
  scanf("%d %d",&A,&B);
  while(ori<B)
  {
    ori+=(A-1);
    
    ans++;
  }
  printf("%d\n",ans);
  return 0; 
}