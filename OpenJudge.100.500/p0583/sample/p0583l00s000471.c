#include<stdio.h>

int main(){
	int n, m, a, b, c, d, i, flag=0;
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	char s[n+3];
	scanf("%s", s);
	if(c>d){
		m=c;
		flag=1;
		for(i=b-1;i<d-1;i++){
			if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){
				flag=0;
				i=d;
			}
		}
	}else{
		for(i=a-1;i<d-1;i++){
			if(s[i]=='#'&&s[i+1]=='#'){ 
				flag=1;
				i=n;
			}
		}
	}
	if(flag) printf("No");
	else printf("Yes");
}