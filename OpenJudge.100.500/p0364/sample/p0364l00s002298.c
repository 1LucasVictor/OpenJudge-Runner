#include <stdio.h>
int main(){
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r); 
      if (x >= r && x+r <= W&&y >= r && y+r <= H){                
    printf("Yes\n");
}
      else {
    printf("No\n");
}
    return 0;
}
