#include <stdio.h>
int main()
{
  int work, x, y;

  scanf("%d%d", &x, &y);
  //input number to variable x, y

  while(y!=0){
    work=y;
    y=x%work;
    x=work;
  }
  //using Euclidean algorithm

  printf("%d\n", x);
  //out put answer

  return 0;
}