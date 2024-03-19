#include <stdio.h>
long int max (long int a,long int b)
{
if(a>b)
 return a-b;
 else
 return b-a;
}

int main(void){
long int n,k,c,ans,ANS;
scanf("%ld %ld",&n,&k);
 c=max(n,k);
 if(c>n)
 printf("%d",n);
 else{
 ans=max(c,k);
 do{
 ANS=ans;
 ans=max(ans,k);
 } while(ANS>ans);
printf("%d",ANS);}

return 0;
}
