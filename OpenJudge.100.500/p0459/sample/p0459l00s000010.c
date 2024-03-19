#include <stdio.h>
#include <string.h>
int main(){
 int X,Y;
 scanf("%d %d",&X,&Y);
 if(Y<2*X||4*X<Y)printf("No");
  else if(Y%2==0)printf("Yes");
  else printf("No");
 return 0;
}