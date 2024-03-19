#include<stdio.h>
 
int main(void){
  int n;
  int i = 0;
  float x1,y1,x2,y2,x3,y3,x4,y4;
  double a,b;
 
  scanf("%d",&n);
 
  while(scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4) != EOF){
 
    if( i >= n )break;
 
    a = (y2 - y1) / (x2 - x1);
    b = (y4 - y3) / (x4 - x3);
 
    if( a == b ){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
 
    i++;
 
  }
 
  return 0;
}