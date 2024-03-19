#include <stdio.h>
 
int main(void)
{
  int a,b,k;
  
  scanf("%d%d%d",&a, &b, &k);
  
  int min;
  int t=0;
  int ar[1000];
 
  if(a<=b)
	min=a;
  
  else
    min=b;
    
  for( int i=1; i<=min; i++ ){
    if( a%i==0&&b%i==0){
      ar[t]=i;
    　t++;
    }
  }
 
  printf("%d",ar[t-k]);
  
　return 0;
}