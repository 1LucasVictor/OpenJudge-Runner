#include<stdio.h>

int main(void)
{
  int w=0,h=0,x=0,y=0,r=0;
  scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);

if ((x - r) < 0)
{
printf("No\n");
}

else if ((x+r)>w)
{
printf("No\n");
}
else if ((y-r)<0)
{
printf("No\n");
}
else if ((y+r)>h)
{
printf("No\n");
}
else
{
printf("Yes\n");
}


return 0;
}
