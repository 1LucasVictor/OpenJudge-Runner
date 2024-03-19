#include <stdio.h>
#define N 10000

int main()
{

  int number[N],i,j,a,n=0,yakusuu;

  scanf("%d",&a);

  for(i = 0;i < a;i++)
  {
    scanf("%d",&number[i]);
  }

  for(i = 0;i < a;i++)
  {
    yakusuu = 0;

    for(j = 1;j <= number[i];j++)
    {
      if(number[i] % j == 0)yakusuu++;
    }
    if(yakusuu == 2)n++;
  }

  printf("%d\n",n);


  return 0;

}
      