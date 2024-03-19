#include <stdio.h>

int main( void )
{
int a;
int b;
int c;
int d;

int n;
int ans;

while( scanf( "%d", &n ) != EOF )
{
ans = 0;
for( a = 0; a < 10; a++ )
{
for( b = 0; b < 10; b++ )
{
for( c = 0; c < 10; c++ )
{
for( d = 0; d < 10; d++ )
{
if( a + b + c + d == n )
{
ans++;
}
}
}
}
}
printf( "%d\n", ans );
}
return (0);
}