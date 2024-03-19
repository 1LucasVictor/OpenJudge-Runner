#include<stdio.h>
 
int main(void)
{
  int N, K, num, min;
  int flag = 0;
  
  scanf("%d %d", &N, &K);
  
  num = N;
  min = N;
  do
  {
    num -= K;
    if(num < 0)
      num *= -1;
    
    if(flag == 0 || num < min)
    {
      min = num;
      flag = 1;
    }
    
    else if(num == min || num > min)
      flag = 2;
  } while(flag != 2);
  
  printf("%d\n", min);
  
  return 0;
}