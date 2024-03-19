#include <stdio.h>
long long int hcf(long long int n1,long long int n2);
int main()
{
   long long int n1, n2,lcm;

   while(scanf("%lld %lld", &n1, &n2)!=EOF){
   lcm = (n1*n2)/hcf(n1 ,n2);
   printf("%lld %lld\n", hcf(n1,n2),lcm);
   }
   return 0;
}
long long int hcf(long long int n1,long long int n2)
{
    if (n2!=0)
       return hcf(n2, n1%n2);
    else
       return n1;

}