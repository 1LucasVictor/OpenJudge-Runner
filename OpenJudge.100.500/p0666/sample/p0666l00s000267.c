#include<stdio.h>
int main(void){
int x,a,b,y,z;
scanf("%d",&x);
scanf("%d",&a);
scanf("%d",&b);

y = b - a;
if (a >= b) {
printf("delicious\n");
} else if (y <= x) {
printf("safe\n");
}  else if (y > x) {
printf("dangerous\n");
}
return 0;
}
