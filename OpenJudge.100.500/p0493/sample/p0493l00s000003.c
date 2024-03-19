#include<stdio.h>
#include<string.h>
int main ()
{
    long long int a,i,j,n=0,z;
    scanf("%lld", &a);
    if(a>500){
        n=(a/500)*1000;
        a=a-500*n/1000;
    }
    if(a>5){
          z=a/5;
          n=n+z*5;
    }
    //if(a==0&&n!=0)printf("0\n");
    printf("%lld",n);
}
