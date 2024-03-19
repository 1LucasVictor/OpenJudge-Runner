#include<stdio.h>
int main()
{
	char S[10],T[11];
	scanf("%s",S);
	scanf("%s",T);
	for(int i=0;S[i]!='\0';i=i+1){
		if(S[i]!=T[i]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}