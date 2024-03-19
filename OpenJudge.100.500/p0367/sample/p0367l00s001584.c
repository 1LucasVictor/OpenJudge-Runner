#include <stdio.h>

int main(void) {
int a, b, c, sum=0;
scanf("%d %d %d", &a, &b, &c);
while (1){
	if (c%a == 0)
		sum = sum+1;
	if (a == b)
		break;
	a++;
}
printf("%d\n", sum);

return 0;
}