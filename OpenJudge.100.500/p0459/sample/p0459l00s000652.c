#include <stdio.h>

int main(){
  int x,y;
  scanf("%d %d",&x,&y);

  int i,flag=0;
  for(i=0;i<=x;i++){
    if(y-2*i==4*(x-i)){
      flag=1;
      break;
    }
  }

  if(flag==1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}