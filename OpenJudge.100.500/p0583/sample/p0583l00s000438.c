#include<stdio.h>

int main(){
	int n, a, b, c, d, i, flag=0;
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	char s[n+3];
	scanf("%s", s);
	for(i=0;i<n;i++){
		if(s[i]=='#'&&s[i+1]=='#'){ 
			flag=1;
			i=n;
		}
	}
	if(c>d){
		flag=1;
		for(i=b-1;i<d-1;i++){
			if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'){
				flag=0;
				i=d;
			}
		}
	}
	if(flag) printf("No");
	else printf("Yes");
}