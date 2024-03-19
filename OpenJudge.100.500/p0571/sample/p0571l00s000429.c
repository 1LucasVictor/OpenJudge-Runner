#include <stdio.h>
int main(){
int n,a,b;
scanf("%d ",&n);
scanf("%d ",&a);
scanf("%d\n",&b);
if(b>=(n*a))
printf("%d",(n*a));
else
printf("%d",b);
}