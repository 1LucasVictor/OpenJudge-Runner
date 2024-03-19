#include<stdio.h>

int main(){
	int n, m, a, b, c, d, i, flag=0;
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	char s[n+3];
	scanf("%s", s);
	m = c>d?c:d;
	for(i=a-1;i<m-2;i++){
		if(s[i]=='#'&&s[i+1]=='#'){
			printf("No"); return 0;
		}
	}
	if(c>d){
		for(i=b-1;i<d;i++){
			if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){
				printf("Yes"); return 0;
			}
		}
		printf("No"); return 0;
	}else{
		printf("Yes"); return 0;
	}
}