//ABC131C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n, a, b, c, d;
	int i;
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	char s[n];
	scanf("%s",&s);
	if(c<d){
		printf("Yes");
		return 0;
	}else{
		for(i=1;i<n-1;i++){
			if(s[n-1]=='.' && s[n]=='.' && s[n+1]=='.'){
				printf("Yes");
				return 0;
			}
		}
		printf("No");
		return 0;
	}
}