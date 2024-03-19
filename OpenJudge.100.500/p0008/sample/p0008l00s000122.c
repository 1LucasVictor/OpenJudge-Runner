#include <stdio.h>
 
int main()
{
  int n, i, j, count;
 
  while(scanf("%d", &n) != EOF){
 
    if(n < 2)
      count = 0;
    else if(n >= 2)
      count = 1;
    for(i = 3; i <= n; i+=2){
      j = 3;
      while(j*j <= i){
        if(i%j == 0)
          break;
        j += 2;
      }
      if(i%j != 0 || i ==3)
        count++;
    }
    
    printf("%d\n", count);
  }
  
  return 0;
}