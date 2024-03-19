#include <stdio.h>

typedef struct point{
  long x;
  long y;
}point;

int main()
{
  long N,D,i;
  int count;
  point p[200000];

  scanf("%ld",&N);
  scanf("%ld",&D);

  for(i=0; i<N; i++){
    scanf("%ld",&p[i].x);
    scanf("%ld",&p[i].y);
    printf("\n");
  }

  for(i=0; i<N; i++){
    if( (p[i].x)*(p[i].x) + (p[i].y)*(p[i].y) <= D*D )
      count++;
  }

    printf("%d\n", count);
  return 0;
}