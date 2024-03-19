#include<stdio.h>
#include <stdlib.h>
int main(){
    long int n,k;
  	scanf("%ld %ld",&n,&k);
  	long int n1,n2;
      n1=n%k;
      n2=k-n1;
  if(n1>=n2)
    printf("%ld\n",n2);
  else
    printf("%ld\n",n1);
}

