#include<stdio.h>
#include<math.h>
 
int main()
{
  int x,y,a,b;
  scanf("%d %d",&x,&y);
  
 if ( ( 4*x-y) % 2 ==0 && (4*x-y)>0 )
 {
 	printf("Yes");
   return 0;
 }
  
  printf("No");
  
  return 0;
}