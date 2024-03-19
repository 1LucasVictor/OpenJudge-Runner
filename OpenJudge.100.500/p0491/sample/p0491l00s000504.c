#include <stdio.h>
#include <stdlib.h>
int main(){
  long int n;
  long int k;

  scanf("%ld",&n);
  scanf("%ld",&k);

  long int tmp;
  while(tmp>n){
    tmp=n;
    if(k<n){
      n = n-k;
    }else{
      n = k-n;
    }
  }
  printf("%ld\n",tmp);
}