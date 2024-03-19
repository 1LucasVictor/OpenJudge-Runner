#include<stdio.h>
int main()
{
	char S[11],T[12];
	scanf("%s",S);
	scanf("%s",T);
	for(int i=0;S[i]!='\0';i++){
		if(S[i]!=T[i]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}