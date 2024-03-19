#include<stdio.h>

int main(void) {
char s[3];
scanf("%c%c%c", &s[0], &s[1], &s[2]);
int cnt = 0;
for (int i = 0; i < 3; i++) {
if (s[i] == '1') cnt++;
}

printf("%d", cnt);

 return 0;
}