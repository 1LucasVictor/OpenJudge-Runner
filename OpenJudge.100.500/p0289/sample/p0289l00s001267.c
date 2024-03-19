#include<stdio.h>
int main(){
  int x,y,z,w,i;

  scanf("%d%d",&x,&y);
  if (x<y){
    z=x;
    x=y;
    y=z;
  }
  z=x%y;

  if(z!=0){
    while(1){
      w=y%z;
      if(w==0)
	{printf("%d\n",z);
	  break;}
      y=z;
      z=w;
    }
  }

  else printf("%d\n",y);
  return 0;
}