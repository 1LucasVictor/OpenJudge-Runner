#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define ll long long int
#define lim 100010
#define mod 1e9+7
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))
int compare(const void *a,const void *b){return *(int*)a-*(int*)b;}

int main(void){
	int N,A,B,C,D;
	scanf("%d%d%d%d%d",&N,&A,&B,&C,&D);
	char S[200001];
	scanf("%s",S);
	bool ans = true;
	for(int i=0;i<strlen(S)-1;i++){
		if(S[i]=='#' && S[i+1]=='#'){
			ans = false;
			break;
		}
	}
	if(C>D && ans){
		for(int i=B-1;i<D-1-2;i++){
			if(S[i]=='#' && S[i+1]=='#' && S[i+2]=='#'){
				ans = true;
				break;
			}
		}
	}
	
	
	printf("%s",ans?"Yes":"No");
	return 0;
}