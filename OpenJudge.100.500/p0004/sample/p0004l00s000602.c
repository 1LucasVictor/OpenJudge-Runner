#include<stdio.h>
	int gcd( int m, int n )
{
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	while( m != n )
	{
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}
	
	int lcm( int m, int n )
{
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	return ((m / gcd(m, n)) * n); 
}

int main(void){
	int m,n;
	int a,b;
	while(scanf("%d",&m)!=EOF){
		scanf("%d",&n);
		a=gcd(m,n);
		b=lcm(m,n);
		printf("%d %d\n",a,b);
	}
	return 0;
}