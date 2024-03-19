#include<stdio.h>

int main()
{
long long a,b,x,i,gcd,lcm,product;
while(scanf("%lld %lld",&a,&b)!=EOF){
if(a==0||b==0){
gcd=0;
lcm=0;
}else{
if(a>b)
x=a;
else x=b;
product=a*b;
for(i=1;i<=x;i++){
if(a%i==0&&b%i==0)
gcd=i;
}

lcm=product/gcd;
}
printf("%lld %lld\n",gcd,lcm);
}
return 0;
}