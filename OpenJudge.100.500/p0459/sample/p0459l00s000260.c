#include<stdio.h>
int main() {
	int x , y ;
	scanf("%d%d",&x,&y) ;
	if((4*x-y)>=0) {
		if((4*x-y)%2==0)  
		    printf("Yes") ;
		else
		    printf("No") ;
	}
	else
	    printf("No") ;
}