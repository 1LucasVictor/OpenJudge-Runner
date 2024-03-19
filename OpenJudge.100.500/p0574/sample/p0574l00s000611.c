#include <stdio.h>

int main(void){

   int i,a;
   int x,y,z,w;
  
  /*  scanf("%d",&a);
   x=a/1000;y=(a-x*1000)/100;z=(a-x*1000-y*100)/10;
   w=(a-x*1000-y*100-z*10);
  if(x==y||y==z||z==w)*/    //改良型
  int b[4];
  for(i=0;i<4;i++)
    b[i]=getchar();

  if(b[0]==b[1]||b[1]==b[2]||b[2]==b[3])
    printf("Bad");
  else
    printf("Good");

}
