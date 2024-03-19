#include <stdio.h>

int main(){
  
  long long i, n, a, sum=0, max=-1000000, min=1000000;
  
  scanf("%lld", &n);
  
  for (i = 0; i < n; i++){
    scanf("%lld", &a);
    sum = sum + a;
    if (a >= max){
      max = a;
	}
    if (a <= min){
      min = a;
    }
  }
    printf ("%lld %lld %lld\n",min, max, sum);
    
    return 0;
}