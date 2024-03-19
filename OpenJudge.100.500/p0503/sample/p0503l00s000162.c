#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {

	int  N,i;
	long no,size;
	scanf("%d",&N);

    size=(long)pow(10,9);
	char  *A;

	A=(char*)malloc(size);
	if(A==0) return 1;
	memset(A,0x00,size);

	for(i=0;i<N-1;i++) {
		scanf("%ld ",&no);
		if(A[no]){printf("NO");goto END;}
		A[no]=0x01;
	}
	scanf("%ld",&no);
	if(A[no]) printf("NO");
	else      printf("YES");
END:
	 free(A);
	 return 0;
}
