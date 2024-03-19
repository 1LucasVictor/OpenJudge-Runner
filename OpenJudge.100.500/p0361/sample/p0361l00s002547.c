#include<stdio.h>
 
int main(void) {

int a, h, m, s;

scanf("%d\n", &a);
 
s = a % 60;
a = (a - s) / 60;
m = a % 60;
a = (a - m) / 60;
h = a;
 
printf("%d:%d:%d\n", h, m, s);

return 0;
}