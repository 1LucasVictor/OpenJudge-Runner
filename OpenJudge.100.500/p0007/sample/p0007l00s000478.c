#include<stdio.h>
int main()
{
    long long int n,i,j,k,l,count;
    while(scanf("%lld",&n)!=EOF){

    for(i=0,count=0;i<=9;i++)
     {for(j=0;j<10;j++)
      {for(k=0;k<10;k++)
         {for(l=0;l<10;l++)
           {
               if(i+j+k+l==n) count++;
           }}}}
           printf("%lld\n",count);}
    return 0;
}