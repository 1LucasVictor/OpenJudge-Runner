#include <stdio.h>
int main(){
  int c,t;
  int X,Y;
  scanf("%d %d",&X,&Y);
  c = (4*X-Y)/2;
  t = (Y-2*X)/2;
  if ((ceil(t)==floor(t)) && (ceil(c)==floor(c)) && (t>=0 && c>=0)){
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}