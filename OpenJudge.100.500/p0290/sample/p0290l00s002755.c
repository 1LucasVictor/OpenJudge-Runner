#include <stdio.h>
#include <math.h>
int isprime(int);
int main(){
  int n,a[10000],x=0,i;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d",&a[i]);
  }

  for(i = 0; i < n; i++){
    if(isprime(a[i])==1)x++;
  }
  printf("%d\n",x);

  return 0;
}


int isprime(int x){
  int i;
   if(x == 2) return 1;
   if(x < 2 || x%2 == 0) return 0;
   for(i = 3; i < sqrt((double)x); i += 2){
      if(x%i == 0) return 0;
    }
    
    return 1;
}

