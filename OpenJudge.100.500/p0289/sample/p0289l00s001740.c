#include <stdio.h>
int main(void){
  int x;
  int y;
  int i;
  scanf("%d %d",&x,&y);
  if(x>y){
  int max=y;
    for(max<0;max--;){
      if(x%max==0&&y%max==0){
        printf("%d\n",max);
      break;
      }
      
    }
  }else{
  int max=x;
    for(max<0;max--;){
      if(x%max==0&&y%max==0){
        printf("%d\n",max);
      break;
      }
      
    }
  }

return 0;
}