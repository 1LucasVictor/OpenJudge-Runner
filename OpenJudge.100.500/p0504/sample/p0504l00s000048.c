#include <stdio.h>
int main(void){
  int H,A;
  scanf ("%d %d",&H,&A);
  if (H%A==0) printf ("%d",H/A);
  else printf ("%d",(H/A)+1);
}