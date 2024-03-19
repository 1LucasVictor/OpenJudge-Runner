#include <stdio.h>

int main(void) {
int input[3];
int yakusuu = 0;
int i;

for(i = 0; i < 3; i++) {
scanf("%d", &input[i]);
}

for (i = input[0]; i <= input[1]; i++) {
if (input[2] % i == 0) yakusuu ++;
}

printf("%d\n", yakusuu);

return 0;
}
