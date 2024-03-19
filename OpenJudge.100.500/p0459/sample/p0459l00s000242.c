#include<stdio.h>
 
int main(){
  int X,Y;
  int A,B;
  while(scanf("%d %d",&X,&Y)==0);
    
  //A=2*X-Y/2;
  //B=(Y-2*X)/2;
  
  if(2*X>Y)
    printf("No\n");
   else if(Y%2!=0)
    printf("No\n");
  else
    printf("Yes\n");
  
  return 0;
}