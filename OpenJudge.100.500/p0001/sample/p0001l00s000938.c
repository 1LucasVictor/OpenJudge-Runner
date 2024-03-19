#include <stdio.h>
int main ()
{
    long long a,b,i,j;
    while(scanf("%lld %lld",&a,&b)!=EOF){
       j=a+b;
for( i=0;j!=0;i++)
{
    j=j/10;
}

 printf("%lld\n",i);
    }

    return 0;

}

