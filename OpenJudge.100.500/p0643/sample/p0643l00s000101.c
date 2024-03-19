#include <stdio.h>

int main(){
int a,b;

scanf("%d %d",&a,&b);
puts(a*b%2 ? "0dd" : "Even");
return 0;

}
