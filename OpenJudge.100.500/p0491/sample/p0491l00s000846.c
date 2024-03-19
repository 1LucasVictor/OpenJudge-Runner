#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int k,n;
 
scanf("%d%d",&n,&k);
int min=n,x=n;

for(;;){
    x=x-k;
    if(abs(min)>abs(x)){min=abs(x);}
    else if(abs(min)==abs(x)){break;}
    else if(abs(min)<abs(x)){break;}
}
printf("%d\n",abs(min));
return 0;
}