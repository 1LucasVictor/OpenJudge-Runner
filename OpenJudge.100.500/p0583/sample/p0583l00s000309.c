#include <stdio.h>

int main(void){
	int a,b,c,d,n,i,max,min,sign1=0,sign2=0;
	
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	
	char s[n];
	
	scanf(" %s",s);
	
	if(c>d){
		max=c;
		min=d;
	}else{
		max=d;
		min=c;
	}
	
	for(i=a-1;i<=d-1;i++){
		if(s[i]=='#'&&s[i+1]=='#'){
			sign1=1;
		}
	}
	
	for(i=b-2;i<=min-2;i++){
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