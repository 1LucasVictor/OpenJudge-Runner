#include<stdio.h>

int main()
{
  int i,fives=0,seven=0;
  for (i=0;i<3;i++)
{
  int temp;
 scanf("%d",&temp);
 if (temp==5)
fives++;
  if (temp==7)
  seven++;
}
if (fives==2 && seven==1)
  printf("YES");
else
  printf("NO");
  return 0;
}