#include <stdio.h>

int main(void) {
	int A,i,cnt=0;
	scanf("%d",&A);
	for(i=1;i<10;i++){
		if(A%i==0){
			if(A/i<10){
				printf("Yes");
				cnt++;
				break;
			}
		}
	}
	if(cnt==0){
		printf("No");
	}
	return 0;
}