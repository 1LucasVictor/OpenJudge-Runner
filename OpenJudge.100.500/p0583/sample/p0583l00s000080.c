#include <stdio.h>
#include <stdlib.h>
int main(){
	char *S;
	int A,B,C,D,N;
	scanf("%d%d%d%d%d",&N,&A,&B,&C,&D);
	S=(char *)malloc(sizeof(char)*N);
	scanf("%s",S);
	B=B-1;
	A=A-1;
	C=C-1;
	D=D-1;
	if(C<D){
	while(A!=C && B != D && A<N && B<N){
		if(S[B+2]=='.' && S[B+1]=='#'){
			B+=2;
		}else if(S[B+1]=='.'&&(S[B+2]=='#'|| B+2>N-1)){
			B+=1;
		}else if(S[B+1]=='.' &&S[B+2]=='.'){
			B+=2;
		}
		//printf("B=%d\n",B);
		if(S[A+1]=='.' && (S[A+2]=='#'||A+2==B || A+2>N-1)){
			A+=1;
		}else if(S[A+2]=='.'){
			A+=2;
		}
		//printf("A1=%d\n",A);
	}
	}else{
		while(A!=C && B != D && A<N && B<N){
		if(B-1==A || A>B){
			if(S[A+1]=='.' && (S[A+2]=='#'||A+2==B || A+2>N-1)){
			A+=1;
			}else if(S[A+2]=='.'){
			A+=2;
			}
			//printf("A1=%d\n",A);
			if(S[B+2]=='.' && S[B+1]=='#'){
			B+=2;
			}else if(S[B+1]=='.'){
				if(B+1==A);
				else B+=1;
			}
			//printf("B=%d\n",B);
		}else{
		if(S[B+2]=='.' && S[B+1]=='#'){
			B+=2;
		}else if(S[B+1]=='.'&&(S[B+2]=='#'|| B+2>N-1 || B+2==A)){
			B+=1;
		}else if(S[B+1]=='.' &&S[B+2]=='.'){
			B+=1;
		}
		//printf("B=%d\n",B);
		if(S[A+1]=='.' && (S[A+2]=='#'||A+2==B || A+2>N-1)){
			A+=1;
		}else if(S[A+2]=='.'){
			A+=2;
		}
		//printf("A=%d\n",A);
	}
	}
	}
	if(A==C && B==D){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}