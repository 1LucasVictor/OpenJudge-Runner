#include <stdio.h>
int main(void)
{

int x, a, b;

scanf("%d %d %d", &x, &a, &b);

if(a >= b){
printf("delicious\n");
}else if (x + a +1 <= b){
printf("dangerous\n");
}else if(a < b && b - a <= x) { 
printf("safe\n");
}
    return 0;

}
