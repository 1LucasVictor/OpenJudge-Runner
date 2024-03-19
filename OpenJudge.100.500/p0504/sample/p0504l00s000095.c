#include <stdio.h>
int main(){
	int H;
	int A;
	int total;
	scanf ("%d %d",&H,&A);
	total = H/A;
	if (H%A==0){
		printf("%d",total);
	}
	else{
		printf("%d",total+1);
	}
	return 0;
}