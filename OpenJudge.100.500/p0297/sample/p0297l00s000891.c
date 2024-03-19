#include<stdio.h>
#include<string.h>
int main(){

  int i,j,n,q,len;
  scanf("%d %d", &n, &q );

  int time[300000],head,tail,cnt;
  char name[300000][11],S[11];

  for ( i = 0 ; i < n ; i++ ){

    scanf("%s", S );

    len = strlen(S);
    
    for ( j = 0 ; j < len ; j++ ){
      name[i][j] = S[j];
    }

    scanf("%d", &time[i] );

  }

  head = 0;
  tail = n;
  cnt = 0;
  
  while( tail > head ){

    if ( time[head] > q ){

      time[tail] = time[head] - q;

      for ( i = 0 ; i < len ; i++ ){
	name[tail][i] = name[head][i];
      }

      head += 1;
      tail += 1;
      cnt += q;

    } else {

      cnt = cnt + time[head];
      
      for ( i = 0 ; i < len ; i++ ){
	printf("%c", name[head][i] );
      }

      printf(" %d\n", cnt );

      head += 1;

    }

  }

  return 0;
  
}