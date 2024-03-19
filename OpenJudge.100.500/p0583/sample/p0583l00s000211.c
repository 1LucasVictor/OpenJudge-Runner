#include<stdio.h>
#include <string.h>

int main(){

int n,a,b,c,d,cnt=0,max=0,k,cnt2=0;
char s[200000];

scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
scanf("%s",&s);

k=c>d?c:d;

for(int j=a;j<k-1;j++){
	if(s[j]=='#'&&s[j+1]=='#'){cnt2++;break;}
	}
	
if(cnt2!=0){
	printf("No");
	}
else{
		
		
if(c>d){
	for(int i=b-1;i<d;i++){
		if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){
			printf("No");
			return 0;
			}
	}
	printf("Yes");
	return 0;
}
if(d>c){
	printf("Yes");
}

}
return 0;
}
