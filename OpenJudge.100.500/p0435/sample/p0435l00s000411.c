#include<stdio.h>
#include<math.h>

int main(void){
  int n,an;
  long int dd,dxy,x,y,d;
  an=0;
  scanf("%d %ld", &n, &d);
  dd = d*d;
  for(int i=0;i<n;i++){
    scanf("%ld %ld", &x, &y);
    dxy = x*x+y*y;
    if(dxy<=dd){
      an++;
    }
  }
  printf("%d", an);
  
  return 0;
}