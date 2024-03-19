#include <stdio.h>

int main(void){

  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
	int answer = b+c-a;
	if (answer < 0) {
		answer = 0;
	}
	printf("%d\n", answer);

  return 0;
}