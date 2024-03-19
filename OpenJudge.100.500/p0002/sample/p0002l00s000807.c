#include <stdio.h>
int isRight(int x,int y,int z){
  if(x*x==(y*y+z*z))return -1;
  return 0;
} 
int main(){
  int a,b,c,d,e;
  scanf("%d",&a);
  for(b=1;b<=a;b++){
    scanf("%d %d %d",&c,&d,&e);
    if(isRight(c,d,e) || isRight(d,c,e) || isRight(e,c,d)) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}