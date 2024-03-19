#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N[10000], x, i, a=0, n, b=0;


  scanf("%d", &n);
  
  for(i=0;i<n;i++){
    scanf("%d", &N[i]);
  }

  for(i=0;i<n;i++){
    for(x=2;x*x<=N[i];x++){
      if(N[i] % x == 0){
	a = 1;
	break;
      }
    }
    if(a==0){
      b++;
    }
    a=0;
  }

  printf("%d\n", b);

  return 0;
}
	
	

