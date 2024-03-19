#include <stdio.h>
 
int egara(char c){
  if( c == 'S') return 0;
  if( c == 'H') return 1;
  if( c == 'C') return 2;
  if( c == 'D') return 3;
  return 0;
}

char Egara(int n){
  if( n == 0) return 'S';
  if( n == 1) return 'H';
  if( n == 2) return 'C';
  if( n == 3) return 'D';
  return 'S';
}
int main(){
  int n,a[4][13],i,j,m;
  char c,d;
  
  for( i = 0; i < 4; i++){
    for( j = 0; j < 13; j++){
      a[i][j]=1;
    }
  }
  scanf("%d\n",&n);
  for( i = 0; i < n; i++){
    scanf("%c %d\n",&c,&m);
    a[egara(c)][m-1]=0;
  }
  
for(i = 0; i < 4; i++){
    for( j = 0; j < 13; j++){
      if(a[i][j])
      
      printf("%c %d\n",Egara(i),j+1);
    }
  }
  return 0;
}

