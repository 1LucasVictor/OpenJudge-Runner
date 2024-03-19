#include<stdio.h>
int main() {
int a,bang[3],up;
for(a = 0; a < 3; a++) {
scanf("%d",&bang[a]);
}
for(a = 0; a < 2; a++) {
if(bang[a] > bang[a + 1]) {
up = bang[a]; bang[a] = bang[a + 1]; bang[a + 1] = up;
}
if(bang[a] > bang[2]) {
up = bang[a]; bang[a] = bang[2]; bang[2] = up;
}
}
printf("%d %d %d\n",bang[0],bang[1],bang[2]);
return 0;
}