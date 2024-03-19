#include<stdio.h>
#include<stdlib.h>
int main(){
  int x,y,d,a1,a2;
  scanf("%d%d",&x,&y);

  if(x>y){
    a1=x;
    a2=y;
  }else{
    a1=y;
    a2=x;
  }
  while(1){
    
    if(a1%a2==0){
      break;
      
    }else{
      d=a1%a2;
      a1=a2;
      a2=d;
    }
  }
  
  printf("%d\n",a2);
  
  return 0;
}

