#include<stdio.h>

long int main(){

long int a,b,k;
double d;
scanf("%ld %ld",&a,&b);

if(a-b!=0){
d=(a*a)-(b*b);
d=d/(2*(a-b));
k=(int)d;
if(k==d){printf("%ld",k);}
else{
  printf("IMPOSSIBLE");
}
}
return 0;

}
