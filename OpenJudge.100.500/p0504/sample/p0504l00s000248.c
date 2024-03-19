#include<stdio.h>

int main(void)
{
int H,A;
int i = 0;

scanf("%d", &H);
scanf("%d", &A);

while(1)
{
  H = H - A;
  i = i + 1;
  if(H <= 0)
  {
  break;
  }
}

printf("%d", i);

return 0;
}