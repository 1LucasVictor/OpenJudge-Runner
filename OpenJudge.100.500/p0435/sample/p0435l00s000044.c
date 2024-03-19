#include <stdio.h>

typedef struct point{
  int x;
  int y;
}point;

int main()
{
  int N,D,i,count;
  point p[200000];

  scanf("%d",&N);
  scanf("%d",&D);

  for(i=0; i<N; i++){
    scanf("%d",&p[i].x);
    scanf("%d",&p[i].y);
    printf("\n");
  }

  for(i=0; i<N; i++){
    if( (p[i].x)*(p[i].x) + (p[i].y)*(p[i].y) <= D*D )
      count++;
  }
  printf("%d\n", count);
  return 0;
}