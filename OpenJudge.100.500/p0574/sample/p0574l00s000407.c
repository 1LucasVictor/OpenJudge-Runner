#include "stdio.h"
#include "math.h"
int main()
{
  int i,S,g2,h[4],d;
  scanf("%d",&S);
  g2=S;
  for (i = 0; i < 4; i++)
  {
    S=S/(int)pow(10,3-i);
    h[i]=S;
    S=g2%(int)pow(10,3-i);
  }
  for (i = 0; i < 5; i++)
  {
    if (h[i]==h[i+1])
    {
      d=1;
      break;
    }else{
      d=0;
    }

  }
  if (d==1) {
    puts("Bad");
  }else{
    puts("Good");
  }
  return 0;
}
