#include <stdio.h>

int main(void){
int a,b,max;
scanf("%d",&a);
scanf("%d",&b);
if(b > a){
  max = a;
  a = b;
  b = max;
}
if((a*b) < 0){
  max = (a - b);
} else if(a == 1 || b == 1){
  max = a + b;
}else{
  max = a * b;
}
printf("%d",max);
return 0;
}