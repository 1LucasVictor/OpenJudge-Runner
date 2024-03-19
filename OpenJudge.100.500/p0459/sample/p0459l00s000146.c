#include <stdio.h>
int main(void)
{
  int x,y;
  
  scanf("%d %d",&x,&y);
  
  for(int i=0; i<=x; i++){
    if(2*(x+i) == y){
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}