#include<stdio.h>

int hantei(int x){
  int i;
  if(x < 2)
    return 0;

  else if(x == 2)
    return 1;
  
  if(x % 2 == 0)
    return 0;

  for(i = 3;i*i < x;i += 2){
    if(x % i==0)
      return 0;
  }
  return 1;
}

int main()
{
  int answer = 0;
  int n, x, i; 

  scanf("%d", &n);

  for(i = 0;i < n;i++){
    scanf("%d", &x);
    if( hantei(x) )answer++;
  }
  printf("%d\n",answer);
  return 0;
}