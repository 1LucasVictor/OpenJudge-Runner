

#include <stdio.h>


int main(){

	int n, m, l;
	int x, y, k;
	long sum;
	int a[100][100], b[100][100];


	scanf( "%d %d %d", &n, &m, &l );

	for( y=0; y<n; y++ ){
	for( x=0; x<m; x++ ){
		scanf( "%d", &a[x][y] );
	}}

	for( y=0; y<m; y++ ){
	for( x=0; x<l; x++ ){
		scanf( "%d", &b[x][y] );
	}}




	for( y=0; y<n; y++ ){
	for( x=0; x<l; x++ ){
		sum=0;
		for( k=0; k<m; k++ ){
			sum += a[k][y]*b[x][k];
		}
		printf( "%ld", sum );
		if( x != (l-1) ) printf( " " ); 
	
	}printf( "\n" );}







	return 0;

}