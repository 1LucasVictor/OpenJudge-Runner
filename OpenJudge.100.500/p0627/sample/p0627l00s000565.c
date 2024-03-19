#include <stdio.h>
#include <stdlib.h>

int main(void){
int a,b,max;
scanf("%d",&a);
scanf("%d",&b);
if(a > 1 && b > 1){
max = a * b;
}else if(a * b >= 0){
  max = a + b;
}else{
  max = abs(a - b);
}
printf("%d",max);
return 0;
}