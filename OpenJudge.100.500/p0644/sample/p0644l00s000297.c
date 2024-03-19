#include<stdio.h>

int main(){
	
	int ans=0,i;
	char s[10];
	
	scanf("%s",s);
	
	
	for(i=0;i<3;i++){
	if(s[i]=='1'){
		ans++;
	}
	}
	
	printf("\n\n%d\n\n",ans);
	
	return 0;
}