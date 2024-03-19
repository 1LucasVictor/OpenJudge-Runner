#include <stdio.h>
int main(void)
{

int x, a, b;

scanf("%d %d %d", &x, &a, &b);

if(a > b){
printf("delicious\n");
}else if (x + a < b){
printf("dangerous\n");
}else if(b - a < x) { 
printf("safe\n");
}
    return 0;

}
