#include<stdio.h>

main(){

  int x,y,a,b,c;

  scanf("%d%d",&x,&y);
  
  if( x>y ){
    a = x;
    b = y;
  }
  else{
    a = y;
    b = x;
  }
  
  while( b != 0){
    c = b;
    b = a%b;
    a = c;
  }
  printf("%d\n",a);
  return 0;
}