#include<stdio.h>

int main(void) {
int i,n;

scanf("%d",&n);
int ans[n];

for (i = 0; i < n; i++) {
scanf("%d", &ans[i]);
}
for (i--; i >= 0; i--) {
printf("%d", ans[i]);
if(i != 0) {
printf(" ");
}
}
printf("\n");

return (0);
}