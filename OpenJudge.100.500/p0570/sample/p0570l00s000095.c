#include<stdio.h>
int main()
{
  long long int A,B,K;
scanf("%lld%lld",&A,&B);
if((A+B)%2==0)
{
K=(A+B)/2;
printf("%lld",K);

}
else 
printf("IMPOSSIBLE");
return 0;
}