#include<stdio.h>

int GCD(int x, int y);

int main(void)
{
  int x[100], y[100], z, gcd[100], lcm[100]={0};
  int i=0;

  while(scanf("%d %d", &x[i], &y[i])!=EOF){

      if(x[i] <= y[i]){
	z = y[i];
	y[i] = x[i];
	x[i] = z;
      }
      
      gcd[i] = GCD(x[i], y[i]);
      lcm[i] = (x[i])*((y[i])/gcd[i]);

      i++;   
  }
    
  for(z=0; z<i; z++){
    printf("%d %d\n", gcd[z], lcm[z]);
  } 
   
 return 0;
}

int GCD(int x, int y)
{
  int z;
  
  while(x % y != 0){
      z = x % y;
      x = y;
      y = z;
    }

  return y;
}