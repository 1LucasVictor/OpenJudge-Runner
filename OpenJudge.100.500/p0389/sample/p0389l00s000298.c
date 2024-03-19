#include<stdio.h>
#include<string.h>
int main(){

  char n[500];
  int i,m,count,len,sum,shift;

  while(1){
    
    scanf("%s", n);

    if ( n[0] == '-' ) break;
    
    scanf("%d", &m);
    
    sum = 0;
    for ( i = 0 ; i < m ; i++ ){
      scanf("%d", &count);
      sum = sum + count;
    }

    len = strlen(n);

    for ( i = 0 ; i < len ; i++ ){
      n[ i + len ] = n[i];
    }

    shift = sum % len;

    for ( i = 0 ; i < len ; i++ ){
      printf("%c", n[ i + shift ] );
    }

    printf("\n");
    
  }

  return 0;

}