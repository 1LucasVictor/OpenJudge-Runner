#include<stdio.h>

int main(void){
int X,Y;
  scanf("%d%d",&X,&Y);
  
  int count=0;
  for(int i=0;i<X;i++){
  if (4*X-2*(i+1)-Y==0) count++;
  }
  
  if(count>0) printf("Yes");
  else printf("No");
  
return 0;
}