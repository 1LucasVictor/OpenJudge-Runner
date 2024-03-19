#include<stdio.h>
#include<math.h>
int main(void){
 long long int i,n,k,t,m;
  int s=0;
scanf("%lld %lld",&n,&k);
for(i=0;i<n;i++){
scanf("%lld %lld",&t,&m);
if(k*k>=(t*t+m*m))s++;
}
printf("%d",s);
      return 0;
}
