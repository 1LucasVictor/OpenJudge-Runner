#include<stdio.h>

int main(void) {
int n;
int count = 1;

scanf("%d", &n);
while (count <= n) {
count++;
if (count % 3 == 0 || count % 10 == 3) {
printf(" %d", count);
}
}
printf("\n");

return (0);
}