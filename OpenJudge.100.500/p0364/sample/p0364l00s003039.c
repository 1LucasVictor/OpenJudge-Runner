#include<stdio.h>
 int main()
{
  int W;
  int H;
  int x;
  int y;
  int r;
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  if(W>=x+r&&H>=y+r&&0<=x-r&&0<=y-r){
                     printf("Yes\n");
                    }
                         
  else{
        printf("No\n");
      }
 
       
  return 0;
}