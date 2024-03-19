#include<stdio.h>

int main(){
int X,Y;
  int t=0;
  scanf("%d %d",&X,&Y);
 for(int i=2*X;i<4*X+2;i+=2){
   if(Y==i){
     t=1;
     break;
   }
 }
  if(t==1)printf("Yes\n");
  else printf("No\n");
  return 0;
}