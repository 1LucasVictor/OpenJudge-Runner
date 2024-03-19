#include <stdio.h>

int main (void) {
int h, f, turu, kame;

scanf("%d", &h);
scanf("%d", &f);

kame = (f / 2) - h;
turu = h - kame;

if ((h == kame + turu) && (f == 2 * turu + 4 * kame)) {
printf("Yes\n");
} else {
printf("No\n");
}
return 0;
}