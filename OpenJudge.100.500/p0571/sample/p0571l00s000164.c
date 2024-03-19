#include<stdio.h>
int main(){
 int a,b,c,d;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 d = a*b;
 if(a*b < c){
   printf("%d\n", d);
 }else if(b*a > c){
   printf("%d",c);
 }
}