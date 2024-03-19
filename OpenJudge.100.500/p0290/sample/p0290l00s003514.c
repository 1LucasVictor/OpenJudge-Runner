#include<stdio.h>
#include<stdlib.h>
#define max 10000

int main(){
  int n,count=0,i,j;
  int num[max],find;

  scanf("%d",&n);
if( n < 1 || max < n ) exit(2);

  for( i = 0 ; i < n ; i++ )
    {
      scanf("%d",&num[i]);
      if( num[i] < 2 || 100000000 < num[i] ) exit(3);
    }

  for( i = 0 ; i < n ; i++ )
    {
      find = 0;
      if( num[i] == 2 ) find = 1;
      for( j = 2 ; j < num[i] ; j++ )
	{
	  if( num[i] % j == 0 ) break;
	  else if( j == (num[i]-1) ) find = 1;	
}
      if( find == 1 ) count++; 
    }
  printf("%d\n",count);
  return 0;
}