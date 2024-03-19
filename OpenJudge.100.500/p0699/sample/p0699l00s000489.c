#include<stdio.h>

int main(void){
	int A,B,C;
	scanf("%d %d %d", &A, &B, &C);
	if(A==5 || A==7){
	    if(A==5 && (B==5 || B==7)){
	        if(B==5 && C==7)
		        printf("YES\n");
		    else if(B==7 && C==5)
		        printf("YES\n");
		    else
		        printf("NO\n");
	    }
		else if(A==7 && B==5 && C==5)
		    printf("YES\n");
		else
		    printf("NO\n");
	}
    else
        printf("NO\n");

	return 0;
}