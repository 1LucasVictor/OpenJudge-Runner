#include<stdio.h>
int main(void){

  int i, a, b, sum, ma, mi;
  a = 0;
  b = 0;
  mi = 99999;
  ma = 0;
  sum = 0;
  scanf ("%d",&a);
  for(i = 0;i < a;i++){
    scanf("%d",&b);
    if(b > ma){
      ma = b;
    }
    if(b < mi){
      mi = b;
    }
    sum = sum + b;
    
}
printf("%d %d %d\n",mi, ma, sum);
return 0;
}
