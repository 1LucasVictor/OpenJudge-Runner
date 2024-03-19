#include<stdio.h>
int main(void)
{
  int n,a;
  int min=1000000;
  int max=-1000000;
  long long int sum=0;

  scanf("%i", &n);
  for(int i=0;i<n;i++)
  {
    scanf("%i",&a);
    if(min>a) 
    {
        min=a;
        
    }
    if(max<a)
    {
        max=a;
    }
    
    sum=sum+a;
  }

  printf("%i %i %lld\n", min, max, sum);
  
  return 0;
}

