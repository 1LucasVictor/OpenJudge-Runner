#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *args[])
{
	char string_a[2][201];
	int length;
	int m;
	int i,j;
	int h;
	int offset;


	while(1) {
		offset = 0;

		scanf("%s", string_a[0]);

		if( string_a[0][0] == '-' ) break;

		length=0;
		while( string_a[0][length] != 0 ) {
			length++;
		}

		scanf("%d", &m);

		for( i=0; i<m; i++ ) {
			scanf("%d", &h);

			for( j=0; j<length-h; j++ ) {
				string_a[offset^1][j] = string_a[offset][h+j];
			}

			for( j=0; j<h; j++ ) {
				string_a[offset^1][length-h+j] = string_a[offset][j];
			}
			string_a[offset^1][length] = 0;

			offset = offset ^ 1;
		}

		printf("%s\n", string_a[offset]);

	}

	return 0;

}