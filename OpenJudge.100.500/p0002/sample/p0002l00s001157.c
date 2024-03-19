#include<stdio.h>

void get_max( int* , int* , int* );
void swap( int* , int* );

int main(void)
{
	int i;
	int N;
	int a, b, c;
	
	scanf("%d",&N);
	
	for( i = 0 ; i < N ; i++ )
	{
		scanf("%d %d %d", &a, &b, &c);
		get_max( &a , &b , &c );
		if( a*a + b*b == c*c ) printf("YES\n");
		else printf("NO\n");
	}
	
}

void get_max( int *x , int *y , int *z )
{
	if( *x > *y ) swap( x , y );
	if( *x > *z ) swap( x , z );
	if( *y > *z ) swap( y , z );
}

void swap( int *x , int *y )
{
	int t;
	
	t = *x;
	*x = *y;
	*y = t;
}