#include <stdio.h>

int main(void){
int a;
scanf ("%d",&a);
if (1>a||10<a){
    return 1; 
}
printf("%d\n",a+a*a+a*a*a);
return 0;
}