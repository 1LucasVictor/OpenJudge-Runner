#include <stdio.h>

int main(void)
{
  int A,B,box,box1,box2;

  scanf("%d%d",&A,&B);

  box = B % A;
  box1 = A + B;
  box2 = B - A;

  if (box == 0){
    printf("%d",box1);
  }

  else {
    printf("%d",box2);
  }

  return 0;
}
