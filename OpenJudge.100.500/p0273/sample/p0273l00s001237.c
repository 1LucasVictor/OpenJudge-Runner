#include <stdio.h>
 
int main()
{
 
  int n,i;
  int f0, f1, f2;
  int hai[44];
  int cnt = 0;
  f0 = 0;
  f1 = 1;
 
 
  scanf("%d",&i);
 
 
  while(f1<=1134903170) {
    
    hai[cnt] = f1;
    
    f2 = f1 + f0;
   
    f0 = f1;
    f1 = f2;
    cnt++;
  }

  printf("%d\n",hai[i]);
 
  return 0;
}

