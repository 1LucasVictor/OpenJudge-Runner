#include<stdio.h>

void main(void)
{
  int a;
  scanf("%d",&a);
  while(a/10>0){
    a%=10;
  }
  switch(a){
    case 2:case 4:case 5:case 7:case 9:
    puts("hon");
    break;

    case 0:case 1:case 6:case 8:
    puts("pon");
    break;

    case 3:
    puts("bon");
    break;
  }
}
