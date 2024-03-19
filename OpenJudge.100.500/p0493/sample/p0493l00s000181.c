#include<stdio.h>

int main(){
	
	int Y1 = 500, Y2 = 5, amount, H1, H2, H3, H4, H5, H6;
	
	scanf("%d",&amount);
	H1 = amount/Y1;
	H2 = 1000*H1;
	H3 = amount%Y1;
	H4 = H3/Y2;
	H5 = 5*H4;
	H6 = H2 + H5;
	printf("%d\n",H6);
	return 0;
}