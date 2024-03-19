#include <stdio.h>
int main(void)
{
 int W, H, x, y, r;

 scanf("%d",&W);

 scanf("%d",&H);

 scanf("%d",&x);

 scanf("%d",&y);

 scanf("%d",&r);

 if(r-x>=0,r+x<=W,r-y>=0,r+y<=H){
   printf("Yes\n");
 }
 else
 {
   printf("No\n");
 }

 return 0;
}