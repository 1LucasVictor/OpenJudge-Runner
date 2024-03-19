#include<stdio.h>
int lcm( int m, int n );
int gcd( int m, int n );
main(){
  int a,b,A,B;
  while(scanf("%d %d",&a,&b)!=EOF){
    A=gcd(a,b);
    B=lcm(a,b);
    printf("%d %d\n",A,B);
  }
  return 0;
}
  int gcd( int m, int n ){
    if ( ( 0 == m ) || ( 0 == n ) )
      return 0;
    while( m != n ){
	if ( m > n ) m = m - n;
	else         n = n - m;
      }
    return m;
  }


  int lcm( int m, int n ){
    if ( ( 0 == m ) || ( 0 == n ) )
      return 0;
    return ((m / gcd(m, n)) * n);
  }