#include<stdio.h>
int main(){
  int W,H,x,y,r=0;
  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  if (W >= x+r && x-r >= 0){if (H >= y+r && y-r >= 0)printf("Yes\n");
                else printf("No\n");}
    
      else printf("No\n");
  
  return 0;
}