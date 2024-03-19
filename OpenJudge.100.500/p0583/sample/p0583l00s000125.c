//AGC034A
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n, a, b, c, d;
	int i, j;
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	char s[n];
	scanf("%s",s);
	for(i=0;i<n-1;i++){
		if(s[i]=='#' && s[i+1]=='#'){
			printf("No");
			return 0;
		}
	}
	if(c<d){
		printf("Yes");
		return 0;
	}else{
		for(i=1;i<n-1;i++){
			if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
				printf("Yes");
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}