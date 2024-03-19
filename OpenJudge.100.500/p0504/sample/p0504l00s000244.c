#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void) {
int h,a;
scanf("%d %d",&h,&a);
float c = (float)h/(float)a;
int d = h/a;
if (c==(float)d) printf("%d",d);
else if (c>(float)d) {d++;
printf("%d",d);}
return EXIT_SUCCESS;
}
