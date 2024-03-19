#include<stdio.h>
#include<string.h>

int main(){
	char buffer[3][201];
	char* S=buffer[0];
	char* D=buffer[1];
	char* F=buffer[2];
	int M,H;
	int A,B,C;
	while(1){
		scanf("%s",S);
		if(*S=='-')
			break;
		scanf("%d",&M);
		for(A=0;A<M;A++){
			scanf("%d",&H);
			strcpy(D,S+H);
			S[H]=0;
			strcpy(F,S);
			strcat(D,F);
			F=S;
			S=D;
			D=F;
			F=buffer[2];
		}
		printf("%s\n",S);
	}
	return 0;
}