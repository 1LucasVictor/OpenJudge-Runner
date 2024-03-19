#include <stdio.h>
int main(){
  int x,y,work,i,zan;
  scanf("%d %d",&x,&y);

  if(x<y){
    work=x;
    x=y;
    y=work;
  }

  zan=x%y;

  while(zan!=0){
    x=y;
    y=zan;
    zan=x%y;
  }

  printf("%d\n",y);
}