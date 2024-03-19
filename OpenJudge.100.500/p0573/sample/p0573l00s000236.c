#include <stdio.h>

char s[6];

int cont(char a){
	int i;
	int ans=0;
	for(i=0;i<4;i++){
		if(a==s[i]){
			ans++;
		}
	}
	return ans;
}

int main (){
	int i;
	scanf("%s",s);
	for(i=0;i<4;i++){
		if(cont(s[i])!=2){
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}