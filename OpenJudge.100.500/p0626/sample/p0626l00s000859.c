#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

main()
{
  int D,N,i,s;
  scanf("%d%d",&D,&N);
  D = pow(100,D);
  for(i=0,s=0; i<N; i++)
    s += D;
  if(N==100)
    s += D;
  printf("%d\n",s);
}
