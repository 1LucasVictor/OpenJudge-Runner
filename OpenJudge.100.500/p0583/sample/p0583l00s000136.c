#include<stdio.h>
#include<string.h>

int main(){
	int N,A,B,C,D;
	char S[200001];
	int min,max,fin,start;
	int i;
	int cross;
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	scanf("%s",&S);
	if(A<B){
		min=A-1;
		start=B-1;
	}
	else{
		min =B-1;
		start= A-1;
	}
	if(C>D){
		max=C-1;
		fin=D-1;
	}
	else{
		max = D-1;
		fin =C-1;
	}
	if(A>B&&C>D || B>A&& D>C)cross=0;
	else cross = 1;
	
	for(i=min;i<max;i++){
		if(S[i]=='#'&&S[i+1]=='#'){
			printf("No\n");
			return 0;
			break;
		}
	}
	if(cross==0){
		printf("Yes\n");
	}
	if(cross == 1){
		for(i=start;i<fin;i++){
		if(i<fin-1&&S[i]=='.'&&S[i+1]=='.'&&S[i+2]=='.'){
			printf("Yes\n");
			return 0;
			break;
		}
		}
		if(S[fin-1] == '.' && S[fin+1] == '.'){
			printf("Yes\n");
		}
		else if(S[start+1] == '.' && S[start-1] == '.'){
			printf("Yes\n");
		}
		else printf("No\n");
	}
	return 0;
}
