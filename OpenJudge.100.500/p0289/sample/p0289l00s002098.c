#include<stdio.h>

int change(int x,int y);
 
int main(void)
{
  int x,y;
  
  scanf("%d %d",&x,&y);

  if(x > y){
    printf("%d\n",change(x,y));
  } else {
    printf("%d\n",change(y,x));
  }
 
  return 0;
}


int change(int x,int y){
  int n = x%y;
  
  while(n != 0){
    x = y;
    y = n;
    n = x%y;
  }

  return y;
}

