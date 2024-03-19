#include<stdio.h>
int main()
{
  int h,a;
  scanf("%d %d",&h,&a);
  double times;
  int ans;
  times=(double)h/(double)a;
  ans=times;
  if(times!=h/a)
    ans++;
    
    
    
   printf("%d",ans);
 return 0; 
}