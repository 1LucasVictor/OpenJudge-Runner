#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define ll long long int
#define lim 100010
#define INF 1e9
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define ABS(x) ((x)>0?(x):-(x))

int main(void){
	char S[5];
	scanf("%s",S);
	int ok=0;
	for(int i=0;i<3;i++){
		if(S[i]==S[i+1]){
			ok=1;
			printf("Bad");
			return 0;
		}
	}
	if(ok==0)printf("Good");
	return 0;
}