#include <stdio.h>

int main(){

int h,m,s;
int input;

scanf("%d",&s);

m = s/60;
s = s%60;
h = m/60;
m = m%60;

printf("%d:%d:%d\n",h,m,s);

return 0;
}
