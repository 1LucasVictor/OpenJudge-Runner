#include <assert.h>
#include <stdio.h>
int a,b,k,i;
int main()
{
scanf("%d%d%d",&a,&b,&k);
assert((a >= 1) && (a<=100));
assert((b >= 1) && (b<=100));
assert((k >= 1));

while(k<=a || k<=b){
if(a%k==0 && b%k==0){
printf("%d",k);
break;
}
k++;
}


    return 0;
}
