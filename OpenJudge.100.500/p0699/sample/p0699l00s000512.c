#include<stdio.h>
int main (){
int a,b,c,d,e;
  scanf ("%d%d%d",&a,&b,&c);
  d=a+b+c;
    e=a*b*c;
  if (d==17 && e==175){
  printf ("YES");
  }
  else {
  printf ("NO");
  }
  return 0;
}