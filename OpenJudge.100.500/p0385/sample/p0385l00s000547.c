#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	int ii;
	int idx;
	int keta;
	int is_end;
	int total[1000];
	char c;

	//クリア
	memset(total, (int)0, sizeof(int)* 1000);

	idx = 0;
	is_end = 0;
	for (;;) {
		keta = 0;
		for (;;) {
			scanf("%c", &c);
			if (keta == 0 && c == '0') {
				scanf("%c", &c);
				if (c == '\n') {
					is_end = 1;
					break;
				}
			}
			if (c == '\n') {
				break;
			}
			total[idx] += (int)c - '0';
			keta++;
		}
		if (is_end == 1) {
			break;
		}
		idx++;
	}

	for (ii = 0; ii < idx; ii++) {
		printf("%d\n", total[ii]);
	}

	return 0;

}