#include <stdio.h>
 
int gcd(int a, int b){
 
if(a<b){
int temp=a;
a=b;
b=temp;
}
 
int c;
 
do{
c=a%b;
a=b;
b=c;
}while(c!=0);
 
return a;
}
 
int lcm(int a, int b){
 
int c, va, vb;
 
c=gcd(a,b);
va=a/c;
vb=b/c;
 
return c*va*vb;
}
 
int main(void){
 
int a, b;
 
while(scanf("%d %d", &a, &b)!=-1){
 
printf("%d %d\n", gcd(a,b), lcm(a,b));
 
}
 
return 0;
}