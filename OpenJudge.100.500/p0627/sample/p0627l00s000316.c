#include<stdio.h>

int main(){
	
	int A,B;
	int x,y,z;
	int largest;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	x = A+B;
	y= A-B;
	z= A*B;
	
	largest = x;
	
	if(largest < y){
		largest =y;
	}
	
	if(largest < z){
		largest =z;
	}
	
	printf("%d", largest);
	return 0;
}