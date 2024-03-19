#include <stdio.h>
#include <math.h>
int main(){
  int a,b,max,min;
  scanf("%d %d",&a,&b);
  if(a>b){min=b;max=a;}
  else {min=a;max=b;}
  
  if((max-min)%2==0)printf("%d\n",(max-min)/2+min);
  else printf("IMPOSSIBLE\n");
  return 0;
}