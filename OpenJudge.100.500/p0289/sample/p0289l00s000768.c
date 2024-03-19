#include<stdio.h>

int main(){
  int x,y,n,d;
  
  scanf("%d%d",&x,&y);
  
  if(x==y){
      printf("%d\n",x);
      return 0;
  }

  if(x>y){
    n=y;
  }else{
    n=x;
  }
  
  for(d=n/2;d>0;d--){
    if(x%d==0&&y%d==0){
      printf("%d\n",d);
      break;
    }
  }
  return 0;
}

