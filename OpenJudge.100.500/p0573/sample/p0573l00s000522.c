#include <stdio.h>

int main(void){
	char S[5];
	scanf("%s",S);
	char a,b;
	int sum=0;
	int i;
	int f=1;

	for(i=0; i<4; i++){
		sum += S[i];
	}

	a = S[0];
	for(i=1; i<4; i++){
		if(S[i]!=a){
			b=S[i];
			break;
		}else if(i==4){
			f=0;
		}
	}

	if(f==1 && (a+a+b+b) == sum){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

}