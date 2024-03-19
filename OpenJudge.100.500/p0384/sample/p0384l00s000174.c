#include <stdio.h>

int main(void){
	
	int i,n=0;
	char m[1200];

	while(1){
		scanf("%c",&m[n]);
		if(m[n]=='\n')break;
		if('A'<=m[n]&&'Z'>=m[n]){
			m[n]+=32;
		}
		else if('a'<=m[n]&&'z'>=m[n]){
			m[n]-=32;
		}
		n=n+1;
	}

	for(i=0;i<n;i++){
		printf("%c",m[i]);
	}
	printf("\n");

	return 0;
}