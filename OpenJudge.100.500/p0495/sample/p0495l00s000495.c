#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	char s[1][3] ;
	int a_count = 0;
	int b_count = 0;

	scanf("%s", s[0]);




	for(int i = 0; i < 3; i++) {
		if(s[0][i] == 'A' ) {
			a_count++;
		} else if(s[0][i] == 'B' ) {
			b_count++;
		}
	}

	if(a_count == 3 || b_count == 3) {
		printf("No\n");
	} else {
		printf("Yes\n");
	}


	return 0;

}
