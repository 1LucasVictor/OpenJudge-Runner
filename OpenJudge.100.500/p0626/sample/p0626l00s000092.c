#include<stdio.h>
#include<math.h>

int main(void){
int c;
int n;
scanf("%d %d", &c, &n);
c = pow(100, c);
if(n%100){
    printf("%d\n", c * n);
}else{
    printf("%d\n", c * (n + n / 100));
}
return 0;
}