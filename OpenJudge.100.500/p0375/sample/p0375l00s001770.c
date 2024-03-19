#include<stdio.h>
int main(void)
{
  int i=1;
  int x,y,n;
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
      if(3<y){
        if(y%3==0){ 
          printf(" %d",x);
        }
      }
    }
    ++i;
  }
  printf("\n");
  return 0;
}
