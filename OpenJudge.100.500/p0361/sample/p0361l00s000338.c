#include <stdio.h>

int main(void) {

int h = 0;
int m = 0;
int S = 0;
int sec = 0;

scanf("%d",&S);

h = S / 3600;
m = (S - (h * 3600))/60;
sec = S - (h * 3600) - (m * 60);

printf("%d:%d:%d\n",h,m,sec);

return 0;

}
