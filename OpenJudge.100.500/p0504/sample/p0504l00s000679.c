#include <stdio.h>
int main(){
	int H,A,x = 0;
	scanf ("%d %d",&H,&A);
	while (H>0) {
		H=H-A;
		x++;
	}
	printf ("%d",x);
}