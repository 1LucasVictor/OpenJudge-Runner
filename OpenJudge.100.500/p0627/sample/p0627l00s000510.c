#include <stdio.h>
int main(){
int a,b,max;
scanf("%d",&a);
scanf("%d",&b);
max=a+b;
if(max<a-b){
max=a-b;
}
if(max<a*b){
max=a*b;
}
printf("%d\n",max);
}