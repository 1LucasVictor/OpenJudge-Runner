#include <stdio.h>
int main (){
  int a,b;
  scanf ("%d%d",&a,&b);
  if (a==0){
  printf ("%d",b);
  }
  else if (a==1){
  printf ("%d",100*b);
  }
  else {
  printf ("%d",10000*b);
  }
return 0;
}