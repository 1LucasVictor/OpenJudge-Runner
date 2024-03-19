#include <stdio.h>
 int main()
 { 
long long a,b,c;
scanf("%lld%lld%lld",&a,&b,&c);
if(b-c>=0)printf("delicious\n");
else if(abs(b-c)<=a)printf("safe\n");
 else printf("dangerous\n");   }
    