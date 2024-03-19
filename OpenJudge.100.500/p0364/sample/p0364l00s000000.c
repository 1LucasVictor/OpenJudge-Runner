#include <stdio.h>
int main()
{

  int w,h,x,y,r;

scanf("%d%d%d%d%d",&w,&h,&x,&y,&r);

if (w-r-x>0&&w>x&&h-r-y&&h>y&&r>0&&h>0&&w>0){
  printf("Yes\n");
 }

 else
   {
     printf("No\n");
   }

 return 0;

}