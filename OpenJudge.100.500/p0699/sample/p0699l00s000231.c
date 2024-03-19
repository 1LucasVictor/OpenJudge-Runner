#include<stdio.h>

int main(void)
{
  int n,five=0,seven=0;
  for(int i = 0;i < 3;i++)
  {
    scanf("%d",&n);
    switch(n)
    {
      case 5:
        five += 1;
        break;
      case 7:
        seven += 1;
        break;
      default:
        continue;
    }
  }
  if(five == 2 && seven == 1){printf("YES");}
  else{printf("NO");}
  return 0;
}
