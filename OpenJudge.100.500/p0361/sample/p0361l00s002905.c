#include <stdio.h>

int main (void) {

int S;

scanf("%d", &S);

printf("%d:%d:%d\n", S / 3600, (S - (S / 3600 * 3600)) / 60, S - (S / 3600 * 3600 + (S - S / 3600 * 3600) / 60 * 60));

return 0;
}