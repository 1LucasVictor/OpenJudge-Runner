#include <stdio.h>

int main (void) {
 long S;
 scanf("%ld", &S);
 printf("%ld:%ld:%ld\n", (S / 3600), ((S % 3600) / 60), (S % 60));
 return 0;
}