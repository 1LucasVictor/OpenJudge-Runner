#include <stdio.h>
int main()
{

  int w,h,x,y,r;

scanf("%d%d%d%d%d",&w,&h,&x,&y,&r);

if (w-r-x>0&&h-r-y>0){
  printf("Yes\n");
 }

 else
   {
     printf("No\n");
   }

 return 0;

}