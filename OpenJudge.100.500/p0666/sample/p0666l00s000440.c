#include<stdio.h>
int main (){
int a,b,c;
scanf ("%d%d%d",&a,&b,&c);
  if (b>=c){
  printf ("delicious");
  }
  else if (a+b>=c){
  printf ("safe");
  }
  else{
  printf ("dangerous");
  }
return 0;
}