#include <stdio.h>
int main(void){
 int x, Max=0;
 scanf("%d",&x);
 Max += x / 500 * 1000;
 Max += x % 500 / 5 * 5;
 printf("%d",Max);
}