#include <stdio.h>

int isPrime(int);

int main(){

  int n,data[1000],i,c=0;

  scanf("%d",&n);

  for(i=0 ; i<n ; i++){
    scanf("%d",&data[i]);
    if(isPrime(data[i])==0) c++;
  }

printf("%d\n",c);

return 0;

}


int isPrime(int x){

  int i;

  if(x<=1) return 1;

  for (i = 2 ; i < x ; i++) {
    if(x%i==0) return 1;
  }

  return 0;
}