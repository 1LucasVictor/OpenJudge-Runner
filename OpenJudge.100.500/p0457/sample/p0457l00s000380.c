#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int yo(const void *a,const void *b)
{
  return (*(int*)a-*(int*)b);
}
int main()
{
    long long int ch[500000];
    char kh[1000000],arr[1000000];
    long long int a=0,b=0,c,d,e,i=0,j=0,k=0,l=0,tep,temp,m,n,x,y;

    scanf("%lld%lld%lld",&a,&b,&c);
    
    for(i=0;i<a+b;i++)
     {
      scanf("%lld",&ch[i]);
     }
    qsort(ch,(a+b),sizeof(long long int),yo);
    for(i=0;j<(a+b) && k<=c ; i++)
    {
     k+=ch[i];
     j++;
    }
    printf("%lld\n",(k>c)?--j:j);
    return 0;
}