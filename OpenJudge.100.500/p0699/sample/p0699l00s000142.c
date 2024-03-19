#include<stdio.h>
int main (){
	int A,B,C,D=0;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);

	if(A==5&&B==5){
		if(C==7)
			D=1;
	}

	if(A==5&&B==7){
		if(C==5)
			D=1;
	}

	if(A==7&&B==5){
		if(C==5)
			D=1;
	}

	if(D==0)
		printf("NO");
	else
		printf("YES");

	return 0;
}