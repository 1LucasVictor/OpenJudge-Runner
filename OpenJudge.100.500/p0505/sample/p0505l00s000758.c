#include <stdio.h>
#include <stdlib.h>

int main()
{
  int H,N,i;
  int A,totalA=0;

  scanf("%d%d",&H,&N );

  for(i=0; i<N; i++){
    scanf("%d", &A);
    totalA += A;
  }

  if(totalA >= H)
    printf("Yes");
  else
    printf("No");

  return 0;
}
