#include<stdio.h>

int main(void)
{
long int x,a,b;

scanf("%ld %ld %ld", &x, &a, &b);

if( a + x < b){
printf("dangerous\n");
}else if(a < b){
printf("safe\n");
}else{
printf("delicious\n");
}

return 0;
}