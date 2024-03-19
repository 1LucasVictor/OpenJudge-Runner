#include<stdio.h>
#include<math.h>
int main()
{
unsigned long long a,b,GCD,LCM,m,temp;
while (scanf("%llu %llu",&a,&b)!=EOF)
{
    m=a*b;
    {
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
        GCD=a;
    }
    LCM=(m/GCD);
    printf("%llu %llu",GCD,LCM);
}
return 0;
}