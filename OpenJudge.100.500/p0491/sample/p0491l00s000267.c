#include <stdio.h>
#include <stdlib.h>
 
int main()
{
long int x,k,n,tmp;
 
scanf("%ld%ld",&n,&k);
 
if(n<k){
    tmp=k;
    k=n;
    n=tmp;
}
tmp=n%k;
if(abs(k-tmp)<tmp){tmp=abs(k-tmp);}
 
printf("%ld\n",tmp);
 
return 0;
}