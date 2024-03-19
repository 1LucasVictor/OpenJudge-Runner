#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int x,k,n,tmp;
 
scanf("%d%d",&n,&k);

if(n<k){
    tmp=k;
    k=n;
    n=tmp;
}
tmp=n%k;
if(abs(tmp-k)<tmp){tmp=abs(tmp-k);}
printf("%d\n",tmp);

return 0;
}