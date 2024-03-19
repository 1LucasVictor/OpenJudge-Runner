#include<stdio.h>
#include<stdlib.h>
int main(){
long long int n,k,j;
scanf("%lld%lld", &n, &k);
  
  j=n%k;
  if(llabs(j-k)>j){
    printf("%lld\n",j);
    return 0;
  }

printf("%lld\n",llabs(j-k));
return 0;
}
