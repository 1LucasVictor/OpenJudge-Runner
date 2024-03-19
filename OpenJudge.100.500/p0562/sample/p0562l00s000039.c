#include <stdio.h>

int main(void){
	int A,B;
	int plug=1;
	int i;
	scanf("%d %d",&A,&B);

	for(i=0; plug<B; i++){
		plug--;
		plug+=A;
	}

	printf("%d\n",i );
}