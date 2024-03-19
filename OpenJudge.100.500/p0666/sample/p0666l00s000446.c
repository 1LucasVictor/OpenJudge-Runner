#include"stdio.h"
main() {
    int X,A,B;
	scanf("%d%d%d",&X,&A,&B);
	if(X<A)
	printf("dangerous");
    if(X>=A&&X<A+B)
	printf("safe");
	if(X>=A&&X>=A+B)
	printf("delious");
}