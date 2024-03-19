#include<stdio.h>
 
int main(void) {
int i,j,k,count;
int n,x;
 
while(scanf("%d %d", &n, &x), n!=0 && x!=0) {
count = 0;
for(i = 1; i < n-1; i++) {
for(j = i+1; j < n; j++) {
for(k = j+1; k <= n; k++) {
if(i+j+k == x) count++;
}
}
}
printf("%d\n", count);
}
 
return (0);
}