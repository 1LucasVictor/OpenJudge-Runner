#include<stdio.h>
int main()
{
long long int a,b,i,x,y,t;

while(scanf("%lld%lld",&a,&b)==2){
x=a;y=b;
while(b){
t=a%b;
a=b;
b=t;
}

printf("%lld %lld\n",a,(x*y)/a);
}
return 0;
}