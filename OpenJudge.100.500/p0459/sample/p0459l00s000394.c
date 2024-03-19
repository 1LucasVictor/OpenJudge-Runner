#include<stdio.h>
int main(void)
{
  int x,y,i,j,flag=0;

  scanf("%d %d",&x,&y);

  for(i=0;i<=x;i++){
      if(i+3*(x-i)==y-x){
        flag=1;
      }
  }

  if(flag==1){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }

return 0;
}
