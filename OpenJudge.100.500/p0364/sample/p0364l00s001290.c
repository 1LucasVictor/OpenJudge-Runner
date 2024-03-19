#include<stdio.h>

int main(){

  int W,H,x,y,r;

  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

  if(x*y>=0){
    if(x>=0){
      if ((x-r)>=0 && (y-r)>=0 && (W-x)>=r && (H-y)>=r){
        printf("Yes\n");
      }
      else{
        printf("No\n");
      }
    }
    else{
      printf("No\n");
    }
}

    else {
      printf("No\n");
    }

  return 0;
}