#include <stdio.h>
int main () {
int x;
scanf ("%d",&x);
while (x>0) {
if (x%10==7) {puts ("Yes");return 0;}
x/=10;
}
puts ("No");
}
