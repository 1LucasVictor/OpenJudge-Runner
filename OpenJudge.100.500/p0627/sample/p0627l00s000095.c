#include <stdio.h>
int main (void){
int a,b;
scanf("%d",&a);
scanf("%d",&b);

if(a+b>a*b&&a-b){
printf("%d",a+b);
}else if(a*b>a+b&&a-b){
printf("%d",a*b);
}else{
printf("%d",a-b);
}

return 0;
}