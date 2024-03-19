#include <stdio.h>

int main(void){
long x;
long a;
long b;

scanf("%d %d %d", &x, &a, &b);
if(a >= b){
printf("delicious");
}else if(x + a >= b){
printf("safe");
}else{
printf("dangerous");
}
return 0;
}