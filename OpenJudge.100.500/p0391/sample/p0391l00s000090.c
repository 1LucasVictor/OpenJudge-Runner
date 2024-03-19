#include<stdio.h>
int print( char x[], int a, int b ){

  int i;
  
  for ( i = a ; i <= b ; i++ ){
    printf("%c", x[i]);
  }

  printf("\n");

  return 0;
  
}

int reverse( char x[], int a, int b ){

  char y[1001];
  int i;

  for ( i = a ; i <= b ; i++ ){
    y[i] = x[i];
  }

  for ( i = a ; i <= b ; i++ ){
    x[i] = y[ a + b - i ];
  }

  return 0;
  
}

int replace( char x[], int a, int b, char y[] ){

  int i;

  for ( i = a ; i <= b ; i++ ){
    x[i] = y[ i - a ];
  }

  return 0;

}

int operate( char x[] ){

  char print[10] = "print";
  char reverse[10] = "reverse";
  char replace[10] = "replace";

  int i;

  for ( i = 0 ; i <= 5 ; i++ ){
    if ( i == 5 ) return 1;
    if ( x[i] != print[i] ) break;
  }

  for ( i = 0 ; i <= 7 ; i++ ){
    if ( i == 7 ) return 2;
    if ( x[i] != reverse[i] ) break;
  }

  for ( i = 0 ; i <= 7 ; i++ ){
    if ( i == 7 ) return 3;
    if ( x[i] != replace[i] ) break;
  }

  return 0;

}

int main(){

  char str[1001],op[10];
  scanf("%s", str );
  
  int q;
  scanf("%d", &q );

  int a,b,i,result;
  char p[1001];
  
  for ( i = 0 ; i < q ; i++ ){
    scanf("%s", op );
    result = operate( op );

    if ( result == 1 ) {
      scanf("%d %d", &a, &b);
      print( str, a, b );
    } else if ( result == 2 ) {
      scanf("%d %d", &a, &b);
      reverse( str, a, b );
    } else if ( result == 3 ) {
      scanf("%d %d", &a, &b);
      scanf("%s", p);
      replace( str, a, b, p );
    }
  }

  return 0;

}