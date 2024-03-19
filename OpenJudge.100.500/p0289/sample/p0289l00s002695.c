#include  <stdio.h>

int main() {
  int x,y,s;
  
  while(1){
    scanf("%d %d", &x,&y);
    if(1<=x&&y<=1000000000) break;
  }
  if(x>=y){
    while(1){
      s=x%y;
      if(s==0) break;
      x=y;
      y=s;
    }
    printf("%d\n",y);
  }

 else if(y>x){
    while(1){
      s=y%x;
      if(s==0) break;
      y=x;
      x=s;
    }
    printf("%d\n",x);
 }


  
    
  return 0;
}

