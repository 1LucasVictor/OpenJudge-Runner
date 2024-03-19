#include<stdio.h>
#include<math.h>

int so(int A)
{
  int i;
  int count=0;
  
  if( A == 2 )return 1;
  if( A < 2 || A % 2 == 0 )return 0;
  for( i = 3 ; i*i <= A; i+=2){
    if( A % i == 0)return 0;
  }
  return 1;
}

int main()
{
  int a;
  int i;
  int n;
  int A;
  int count = 0;
  
  scanf("%d",&n);
  for( i = 0 ; i < n ; i++ ){
    scanf("%d",&A);
    a = so(A);
    if( a == 1 )count++;
  }
  
  printf("%d\n",count);
  
  return 0;
  
}

