#include<stdio.h>
int main()
{
  long int a,b,c,d;
  int i;
  long int max=0;
  scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
  if(a>=d){
    max=a;
    d=-1;
  }

  if(d>0){
    max=a;
    d-=a;
  }
  if(d>0){
    if(d>=b)
       d-=b;
else
  d=-1;
  }
  
  if(d>0){
    max-=d;
    d-=a;
  }
    
  
  printf("%ld\n",max);
  return 0;
}