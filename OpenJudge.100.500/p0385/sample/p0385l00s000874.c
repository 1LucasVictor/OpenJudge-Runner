#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(void) {

	int x,tmp_x;
	int tmp;
	while (1) {
		scanf("%d", &x);
		if (x == 0) {
			break;
		}
		
		tmp = 0;
		tmp_x = x;
		while (1) {
			tmp += tmp_x%10;
			if (0 == (tmp_x = tmp_x / 10)) {
				break;
			}
		}
		printf("%d\n",tmp);
	}
	
	return 0;
}