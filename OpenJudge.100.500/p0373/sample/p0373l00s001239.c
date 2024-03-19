#include <stdio.h>
int main()
{
  int W,H,i,n;
  while(1)
  {
    scanf("%d %d",&H,&W);
    if(W==0 && H==0)break;
    if(H>=3 && W<=300){
    for(n=1;n<=W;n++)
    {
      printf("#");
    }
    printf("\n");
    for(i=1;i<=H-2;i++)
    {
      printf("#");
      for(n=1;n<=W-2;n++)
      {
        printf(".");
      }
      printf("#\n");
    }
    for(n=1;n<=W;n++)
    {
      printf("#");
    }
    printf("\n\n");
  }}
  return 0;
}