#include<stdio.h>
#include<math.h>
int main()
{
              long long int a,b,n,d,c=0,i,s;
                  double r;
               scanf("%lld%lld",&n,&d);
               for(i=0;i<n;i++)
               {


               scanf("%lld%lld",&a,&b);

               s=a*a+b*b;
               r=(sqrt(s));
               if(r<=d)
               {
                   c++;
               }



                }
                printf("%lld\n",c);

    return 0;


}











