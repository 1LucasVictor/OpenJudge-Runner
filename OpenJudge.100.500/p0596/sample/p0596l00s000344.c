#include <stdio.h>

int main(void){

  char s[100000+1];
  scanf("%s", s);

	int red = 0;
	int blue = 0;
	for (int i = 0; i < 100000+1; i++) {
		if (s[i] == '0') {
			red++;
		} else if (s[i] == '1') {
			blue++;
		} else {
			break;
		}
	}
	int answer = red;
	if (blue < red) {
		answer = blue;
	}
	answer *= 2;

	printf("%d\n", answer);

  return 0;
}