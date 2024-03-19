#include <stdio.h>

int main(){
  int X,Y;
  int i;
  int flag = 0;
  
  scanf("%d %d",&X,&Y);
  
  for(i=0;Y>=0;i++){
    if(Y%X == 0){
      if(Y/X == 2 || Y/X == 4){
        printf("Yes\n");
        break;
      }else{
        printf("No\n");
        break;
      }
    }else if((Y%X)/2 == 0 || (Y%X)/4 == 0 ){
      printf("Yes\n");
      break;
    }else printf("No\n");
  }
  return 0;
}