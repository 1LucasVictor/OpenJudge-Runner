#include <stdio.h>
int main(){
  int x,y,a,e;

  scanf("%d%d",&x,&y);
  if(y>x){   //x>yとなるようにする。
    a=x;
    x=y;
    y=a;
  }

  e=x%y;
  while(e!=0){ //ユークリッド互除法を用いる。eが０となるまで剰余算を繰り返す。
    x=y;
    y=e;
    e=x%y;
  }

  printf("%d\n",y);

  return 0;
}