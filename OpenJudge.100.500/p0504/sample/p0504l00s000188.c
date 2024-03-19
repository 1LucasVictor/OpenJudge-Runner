#include <stdio.h>

int main(){
	int H,A,cnt=1;
	
	scanf("%d %d",&H,&A);
	
	H = H - A;
	
	while(H>0){
		H = H - A;
		cnt = cnt +1;
	}
	
	printf("%d",cnt);
	
	return 0;
}