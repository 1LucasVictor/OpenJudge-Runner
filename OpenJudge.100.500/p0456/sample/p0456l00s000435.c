#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,z;
  char x[2000000],y[2000000];

        scanf("%s %s",x,y);
       for(i=0;i<strlen(x);i++)
       {
           if(x[i]!=y[i]){c++;}
       }

    printf("%lld\n",c);

}
