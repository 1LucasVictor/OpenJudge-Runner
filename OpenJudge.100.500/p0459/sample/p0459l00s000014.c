#include<stdio.h>
int main() {
	int x , y , c;
	scanf("%d%d",&x,&y) ;
	c=4*x-y ;
	if(c>=0) {
		if(c%2==0 && c/2<=x )  
		    printf("Yes") ;
		else
		    printf("No") ;
	}
	else
	    printf("No") ;
}