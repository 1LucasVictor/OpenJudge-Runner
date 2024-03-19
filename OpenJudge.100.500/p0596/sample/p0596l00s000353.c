#include <stdio.h>

void daruma(char* str, long len) {
	long deletion = 0;
	long r, w;
	for (long i = 0; i < len; i++) {
		if ((str[i] != '0') && (str[i] != '1')) break;
		if ((str[i+1] != '0') && (str[i+1] != '1')) break;
		if ((str[i] + str[i + 1] - ('0')*2) == 1) {
			str[i] = '2';
			str[i + 1] = '2';
			i++;
			deletion++;
		}
	}

	if (deletion != 0) {
		r = 0; w = 0; //reading / writing index
		while (1) {

			if (str[r] == '2') r++;

			else if ((str[r] != '0') && (str[r] != '1')) {
				str[w] = '\n';
				break;
			}

			else {

				str[w] = str[r];
				r++;
				w++;

			}

		}
		len -= deletion * 2;
		daruma(str, len);
	}
}

int main(void) {
	char str[100000];
	fgets(str, 100000, stdin);
	//	unsigned long zero,one,ans,index;
	//	zero = 0;
	//	one = 0;
	long len, lend;
	for (len = 0; len < 100000; len++) {
		if ((str[len] != '0') && (str[len] != '1')) break;
	}

	daruma(str, len);

	for (lend = 0; lend < 100000; lend++) {
		if ((str[lend] != '0') && (str[lend] != '1')) break;
	}

	printf("%ld\n", (len - lend));

	return 0;
}