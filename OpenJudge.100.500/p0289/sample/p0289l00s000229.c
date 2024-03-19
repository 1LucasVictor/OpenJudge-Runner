#include <stdio.h>
#include <math.h>

int cal(int a,int b){
 return b ? cal(b,a%b):a;   
}

int main(){
  int a,b;
  double h;
  scanf("%d %d",&a,&b);
  while(a<1&&a>pow(h,9.0)&&b<1&&b>pow(h,9.0)){
    scanf("%d %d",&a,&b);
  }
  printf("%d\n",cal(a,b));

  return 0;
}



