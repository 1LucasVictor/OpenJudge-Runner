
#include <stdio.h>

int main(int argc, char *argv[]) {
	int a=0;
	int b=0;
	scanf( "%d %d\n", &a, &b );

	int ports = a;
	int tap = 1;
	for (tap=1; tap<100; tap++ ) {
		ports = (tap*a) - (tap-1);
		if ( b <= ports ) {
			break;
		}
	}
	printf("%d\n", tap );
}

