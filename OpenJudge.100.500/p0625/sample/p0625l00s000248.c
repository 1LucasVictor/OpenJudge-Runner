#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

main()
{
  int A,B;
  scanf("%d%d",&A,&B);
  if(A>8||B>8)
    printf(":(\n");
  else
    printf("Yay!\n");
}