#include<stdio.h>

int main()
{
   unsigned long long int a, d;
   double c;
   while(scanf("%llu %lf", &a, &c)!=EOF){
    d = a*c;
   printf("%llu\n",d);
   }
   
    return 0;
}
