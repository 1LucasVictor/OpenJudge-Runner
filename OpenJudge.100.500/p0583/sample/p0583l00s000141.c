#include<stdio.h>
int main(void){
	int A,B,C,D,N;
	int CD;
	char S[200001];
	int ia,ib;
	int i;
	int flag=0;
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	scanf("%s",&S[1]);

	
	if(C<B){
		for(i=A;i<C-1;i++){
			if(S[i+1]=='#' && S[i+2]=='#'){
				printf("No");
				return 0;
			}
		}
		for(i=B;i<D-1;i++){
			if(S[i+1]=='#' && S[i+2]=='#'){
				printf("No");
				return 0;
			}
		}
		printf("Yes");
		return 0;
	}else if(C<D){//B<C<D
		for(i=B;i<D-1;i++){
			if(S[i+1]=='#' && S[i+2]=='#'){
				printf("No");
				return 0;
			}
		}
		for(i=A;i<C-1;i++){
			if(S[i+1]=='#' && S[i+2]=='#'){
				printf("No");
				return 0;
			}
		}
		printf("Yes");
		return 0;
		
		
	}else{// if (D<C)
		for(i=A;i<C-1;i++){
			if(S[i+1]=='#' && S[i+2]=='#'){
				printf("No");
				return 0;
			}
		}
		for(i=B;i<=D;i++){
			if(S[i-1]=='.' && S[i]=='.' && S[i+1]=='.'){
				flag =1;
				break;
			}
		}

		if(flag==0){
			printf("No");
			return 0;
		}
		
		for(i=B;i<D-1;i++){
			if(S[i+1]=='#' && S[i+2]=='#'){
				printf("No");
				return 0;
			}
		}
		printf("Yes");
		return 0;
		
		
	}
}
