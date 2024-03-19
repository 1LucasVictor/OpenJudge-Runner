#include <stdio.h>
int main(){
int a,b;
scanf("%d",&a);
a /= 2;
(a % 2 ==1) ? printf("%d",a) : printf("%d", a+1);

return 0;
}
