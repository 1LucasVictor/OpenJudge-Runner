//AGC034A
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	long int n, a, b, c, d;
	long int i, j;
	scanf("%ld %ld %ld %ld %ld",&n,&a,&b,&c,&d);
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
		for(j=b;j<d-1;j++){
			if(s[j-1]=='.' && s[j]=='.' && s[j+1]=='.'){
				printf("Yes");
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}