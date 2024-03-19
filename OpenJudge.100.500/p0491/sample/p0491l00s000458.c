#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    if(a<b){c=a;printf("%lld\n",c);}
    if(a==b){c=0;printf("%lld\n",c);}
    if(a>b)
    {
        c=a-b;if(c<0)c=(-1)*c;
        while(c>0)
        {
            c=c-b;if(c<0)c=(-1)*c;if((c-b)<0 && c>=0){printf("%lld\n",c);break;}
        }
    }


    return 0;

}
