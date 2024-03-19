#include <stdio.h>
int main(void)
{
 int W, H, x, y, r;

 scanf("%d",&W);

 scanf("%d",&H);

 scanf("%d",&x);

 scanf("%d",&y);

 scanf("%d",&r);

 if(x>=W || x<=0){
  printf("No\n");
 }else if(y>=H || y<=0){
  printf("No\n");
 }else if(x+y>W || x-r<0){
  printf("No\n");
 }else if(y+r>H || y-r<0){
  printf("No\n");
 }else
 printf("Yes\n");

 return 0;
}
 