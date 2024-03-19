#include <stdio.h>

int main(void){
	int i,j;
	char S[5];
	scanf("%s",S);
	int f;

	f=0;
	for(i=0; i<4; i++){
		for(j=i+1; j<4; j++){
			if(S[i]==S[j]) f++;
		}
	}
	if(f==2)printf("Yes\n");
	else printf("No\n");
}