#include <stdio.h>

int main(){
  int a,b,c=1;
  int i=0;
  scanf("%d %d",&a,&b);
  
  do{
  	c += (a-1);
    i++;
  }while(c<b);

  printf("%d\n",i);
  
  return 0;
}