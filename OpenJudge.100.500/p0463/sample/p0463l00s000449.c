#include<stdio.h>
int main()
{
  int n,i;
  n<999;
  scanf("%d",&n);
  i=n%10;
  switch(i)
  {
  case 2:
  case 4:
  case 5:
  case 7:
  case 9: printf("hon");break;
  case 0:
  case 1:
    case 6:
    case 8: printf("pon");break;
    case 3: printf("bon");break;

  }
  return 0;
}
