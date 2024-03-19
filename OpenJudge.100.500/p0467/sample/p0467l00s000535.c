#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int a,b,c,k,i,j;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
    if(k==a || (k>a&&k<=a+b)){
        printf("%lld\n",a);
    }
    else if(k<a){
        printf("%lld\n",k);
    }
    else if(a+b+c>k){
            i=((a+b)-c);
        printf("%lld\n",i);

    }
    else if((a+b+c)==k){
            j=(a-c);
        printf("%lld\n",j);
    }


    return 0;
}
