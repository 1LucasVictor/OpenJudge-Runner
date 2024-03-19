#include <stdio.h>
 
int judge(int x)
{
    int i;
    if(x < 2)
      return 0;
    else if(x == 2)
      return 1;
    if(x%2 == 0)
      return 0;
    for(i = 3; i*i <= x; i+=2){
        if(x%i == 0)
          return 0;
    }
    return 1;
}
 
int main()
{
  int n, i, count;
 
  while(scanf("%d", &n) != EOF){
 
  count = 1;
    for(i = 3; i <= n; i+=2){
      if(judge(i))
        count++;
    }
       
    printf("%d\n", count);
  }
  
  return 0;
}