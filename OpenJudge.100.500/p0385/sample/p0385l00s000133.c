#include <stdio.h>
#include <string.h>

int main(void) {
char str[1001];
int ans, pos;

while (scanf("%s", str), strcmp(str, "0")) {
ans = 0;
pos = 0;

while (str[pos] != '\0') {
ans += str[pos] - '0';
pos++;
}

printf("%d\n", ans);
}
return 0;
}
