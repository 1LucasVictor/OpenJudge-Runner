#include<stdio.h>
int main(void)
{
  int i=1;
  int x,y,z,n;
  scanf("%d",&n);
  while(i<(n+1)){
    x=i;
    if((x%3==0)&&(x%10==3)){
      printf(" %d",x);
    }else if((x%3!=0)&&(x%10==3)){
      printf(" %d",x);
    }else if((x%3==0)&&(x%10!=3)){
      printf(" %d",x);
    }else{
      y=x/10;
      z=y/10;
      if((3<=y)&&(3<=z)){
        if((y%3==0)&&(y%10==3)){
          printf(" %d",x);
        }else if((z%3==0)&&(z%10==3)){
          printf(" %d",x);
        }
      }
    }
    ++i;
  }
  printf("\n");
  return 0;
}
