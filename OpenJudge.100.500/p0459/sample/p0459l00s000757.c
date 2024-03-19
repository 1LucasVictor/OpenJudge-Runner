#include<stdio.h>

int main(void)
{
  int x,y;
  scanf("%d %d", &x, &y);

  int flag=0;
  for(int i=0;i<=x;i++){
    if(i*2+(x-i)*4==y){
      flag = 1;
      break;
    }
  }

  if(flag) printf("Yes\n");
  else printf("No\n");

  return 0;
}
