#include <stdio.h>

int main(){
  int x,y,z,xy;
  scanf("%d%d%d", &x,&y,&z);
  xy=x*y;
  if(x*y < z){
  	printf("%d",xy);
  }
  else{
  	printf("%d",z);
  }
}
