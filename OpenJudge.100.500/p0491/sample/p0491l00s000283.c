#include <stdio.h>
#include <stdlib.h>
 
int main()
{
long int x,k,n,tmp;
 
scanf("%ld%ld",&n,&k);
 
tmp=n%k;
if(abs(k-tmp)<tmp){tmp=abs(k-tmp);}
 
printf("%ld\n",tmp);
 
return 0;
}