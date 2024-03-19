#include<stdio.h>

int main(void){
  int i, k = 0, x = 0;
  int n, q;
  int jikan[100];
  char name[1000][11];
  
  scanf("%d %d",&n,&q);
  
  for( i = 0; i < n; i++ ){
    scanf("%s %d",name[i],&jikan[i]);
  }
  
  i = 0;
  
  while(1){
    if( 0 < jikan[i] && jikan[i] <= q ){
      x += jikan[i];
      jikan[i] = 0;
      printf("%s %d\n",name[i],x);
      k++;
      i++;
    }
    else if( jikan[i] > q ){
      x += q;
      jikan[i] -= q;
      i++;
    }
    else if( jikan[i] == 0 ) i++;
    
    if( i == 5 ) i = 0;
    if( k == n ) break;
  }
  return 0;
}