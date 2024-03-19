#include<stdio.h>
int main(){
  int n,q,key;
  int i,j,r;
  int gen = 0;
  int count = 0;

  scanf("%d",&n);
  int S[n];
  for( i=0 ; i<n ; i++ )
    scanf("%d",&S[i]);

  scanf("%d",&q);
  int T[q];
  for( i=0 ; i<q ; i++ )
    scanf("%d",&T[i]);

  for( i=0 ; i<n ; i++ ){
    key = S[i];
    for( r=0 ; r<i ; r++ ){
      if( key == S[r] )gen++;
    }
    for( j=0 ; j<q ; j++ ){
      for( r=0 ; r<j ; r++ ){
	if( T[j] == T[r] )gen++;
      }
      if( key == T[j] ){
	count++;
      }
    }
  }

  printf("%d\n",count);
  
  return 0;
}

