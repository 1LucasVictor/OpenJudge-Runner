#include<stdio.h>
int main()
{
int W,H,x,y,r;
scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
if(W>=x+r||W<=x-r)
{
   if(H>=y+r||H<=y-r)
   {
   printf("Yes\n");
   }
}
else
{
printf("No\n");
}
return 0;
}