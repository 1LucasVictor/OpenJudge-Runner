#include <stdio.h>
 
int main()
{
	int sieve[10001] = {'0'};
	int i,j,n,t;
	
  sieve[0] = sieve[1] = 1;
  for (int i = 2; i * i <= 10000; i++){
    
    for (int j = i*2; j <= 10000; j += i){
      sieve[j] = 1;
    }
  }
  while(scanf("%d", &n) != EOF){
  	t = 0;
  for(int i=1; i<=n ;i++){
  	if(sieve[i] == 0)t++;
  }
  printf("%d\n", t);
  }
  return (0);
}