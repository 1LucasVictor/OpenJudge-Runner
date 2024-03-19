#include <stdio.h>

int main(void){

  long left, right;
  scanf("%ld %ld", &left, &right);

	long left_mod = left%2019;
	long right_mod = right%2019;
	long mod_set = (right-left+1)/2019;

	long min;
	if (mod_set > 0) {
		min = 0;
	} else {
		if (left_mod >= right_mod) {
			min = 0;
		} else {
			min = left_mod*(left_mod+1);
			min %= 2019;
		}
	}

	printf("%ld\n", min);

  return 0;
}