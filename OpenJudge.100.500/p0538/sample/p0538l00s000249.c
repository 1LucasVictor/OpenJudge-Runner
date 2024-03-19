#include <stdio.h>

#define ERROR -1
#define judge(x) ((x>=1)&&(x<=9))?1:0

int main(void)
{
  int A,B;

  scanf("%d %d",&A,&B);

  if(judge(A)==1&&judge(B)==1)printf("%d",A*B);
  else printf("%d",ERROR);

  return 0;
}




