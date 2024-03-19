#include <stdio.h>
int main(){
	int N,A,B,C,D;
	char S[200001];
	scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
	int i;
	char dummy;
	scanf("%c",&dummy);
	for(i=1;i<=N;i++){
		scanf("%c",&S[i]);
	}
	int SA[200001];
	for(i=1;i<=N;i++){
		if(S[i]=='#'){
			SA[i]=1;
		}else{
			SA[i]=0;
		}
	}
	int ans;
	ans=0;
	if(C<D){
		for(i=A+1;i<D;i++){
			if(SA[i]*SA[i+1]==1){
				ans=1;
				break;
			}
		}
	}
	if(C>D){
		int j;
		j=1;
		for(i=B;i<=D;i++){
			if(SA[i-1]+SA[i]+SA[i+1]==0){
				j=0;
				goto jump1;
			}
		}
		jump1:
		if(j==1){
			ans=1;
		}
		for(i=A+1;i<C;i++){
			if(SA[i]*SA[i+1]==1){
				ans=1;
			}
			if(ans==1){
				break;
			}
		}
	}
	if(ans==0){
		printf("Yes");
	}else{
		printf("No");
	}
}
