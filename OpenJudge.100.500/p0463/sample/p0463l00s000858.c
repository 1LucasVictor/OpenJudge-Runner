#include <stdio.h>
int main()
{
  int n,count;
  scanf("%d",&n);
  count=n%10;
  
  switch(count)
  {
    case 2:
    case 5:
    case 7:
    case 9:
    case 4:puts("hon");
      		break;
    case 0:
    case 6:
    case 8:
    case 1:puts("pon");
      	break;
    case 3:puts("bon");
      		break;
  }
}