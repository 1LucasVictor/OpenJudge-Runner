#include <stdio.h>
int main (){
  int a,b,c;
  scanf ("%d%d",&a,&b);
  c=(b-b%100)/100;
  if (a==0){
  printf ("%d",b+c);
  }
  else if (a==1){
  printf ("%d",100*(b+c));
  }
  else {
  printf ("%d",10000*(b+c));
  }
return 0;
}