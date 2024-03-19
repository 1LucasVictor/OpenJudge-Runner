#include <stdio.h>

int main()
{
	int A,B,C,D;
	int t;

	scanf("%d %d %d %d\n",&A,&B,&C,&D);

	if(B<=C || D<=A){
		t=0;
	}
	else{
		if(A<=C){
			if(B<=D){
				t=B-C;
			}
			else{
				t=D-C;
			}
		}
		else{
			if(D<=B){
				t=D-A;
			}
			else{
				t=B-A;
			}
		}
	}

	printf("%d\n",t);

	return 0;
}
