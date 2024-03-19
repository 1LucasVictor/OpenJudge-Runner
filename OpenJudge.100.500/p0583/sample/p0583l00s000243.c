#include <stdio.h>

int main(void){
	int a,b,c,d,n,i,sign1=0,sign2=0;
	
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	
	char s[n];
	
	scanf(" %s",s);
	
	for(i=a-1;i<=n-2;i++){
		if(s[i]=='#'&&s[i+1]=='#'){
			sign1=1;
		}
	}
	
	for(i=b-2;i<=n-3;i++){
		if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'){
			sign2=1;
		}
	}
	
	if(c<d&&sign1==0){
		printf("Yes\n");
	}else if(sign1==0&&sign2==1){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
}