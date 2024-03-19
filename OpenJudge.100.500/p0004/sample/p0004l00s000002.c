#include <stdio.h>
int main()
{
long long int a, b, g, l, t, x, y;
while((scanf("%lld %lld", &a, &b))!=EOF){
x=a;
y=b;
if(a==0) g=b;
else if(b==0) g=b;
else{
while(b!=0){
t=b;
b=a%b;
a=t;
}
g=a;
}
l=(x*y)/g;
printf("%lld %lld\n",g,l);
}
return 0;
}