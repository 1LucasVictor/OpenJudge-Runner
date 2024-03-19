#include <stdio.h>

int main()
{
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if((a-b)>c){
    printf("%d\n",0);
    return 0;
  }
  printf("%d\n",c-(a-b));  
  return 0;
}
