#include <stdio.h>
#include <string.h>

int main(void)
{
    long long int a,b,c,k;
    long long int ans=0;

    scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
    // printf("%d %d %d %d\n",a,b,c,k);

    if (a>=k)
        ans=1*k;
    else if (a<k && (k-a)==b)
        ans=1*a;
    else if (a<k)
    // else if (a<k && (k-a)>b)
        ans=1*a+0*(k-a)+(-1*(k-a-b));
    // else if (a<k && (k-a)<b)
    //     ans=1*a;
    

    printf("%ld\n",ans);
    // if (strcmp(s,"ABC")==0)
    //     printf("%s\n","ARC");
    // else if (strcmp(s,"ARC")==0)
    //     printf("%s\n","ABC");

    return 0;
    

}