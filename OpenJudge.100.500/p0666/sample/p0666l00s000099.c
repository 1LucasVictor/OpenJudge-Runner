#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define ll long long

int main(void){
int X,A,B;
scanf("%d%d%d",&X,&A,&B);
if(A>=B) printf("delicious\n");
else if(A+X>=B) printf("safe\n");
else printf("dangerous\n");
return 0;
}