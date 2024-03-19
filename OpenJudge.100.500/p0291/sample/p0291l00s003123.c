#include<stdio.h>
#include<stdlib.h>
#define MAX 200000

int main(){
  int n,i,j;
  int R[MAX];
  int maxnum;

  scanf("%d",&n);
  if( n < 2 || MAX < n ) exit(2);

  for( i = 0 ; i < n ; i++ ){
    scanf("%d",&R[i]);
    if( R[i] < 1 || 1000000000 < R[i] )
      exit(3);
  }

  maxnum = R[n-1] - R[n-2]; 
  for( i = n ; i >= 0 ; i-- )
    {
      for( j = i-1 ; j >= 0 ; j--)
	{
	  if( i == j ) break;
	  if( maxnum < R[i] - R[j] )
	    maxnum = R[i] - R[j];
	}
    }

  printf("%d\n",maxnum);
 
  return 0;
}